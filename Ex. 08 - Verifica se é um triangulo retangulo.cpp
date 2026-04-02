/*
* **** INSTITUTO FEDERAL - CAMPUS: CUBATÃO-SP **** *
* **** Curso: Técnico de Automação Industrial **** *
* ************************************************ *
*                                                  *
* • Ano: 2026 / 1º semestre						   *
* • turma: CTA - 271 (noturno)                     *
* • Disiplina: CBTPROG - Programação               *
* • Docente: Marco Aurélio                         *
* • Aluno: Ramon Matheus Costa Almeida             *
* ************************************************ *
*/
/*EXERCÍCIO 8 - Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo
retângulo. Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	//Declaração de variáveis - lados do triângulo (A, B, C)
	double ladoA = 0.0, ladoB = 0.0, ladoC = 0.0;
	double triangulo [3] {0,0,0};
	double hipotenusaAoQuadrado = 0, catetoOpostoAoQuadrado = 0, catetoAdjacenteAoQuadrado = 0;
	
	//Solicita ao usuário informar os valores dos lados do triângulo.
	cout<<"Informar lado 'A' do triangulo: ";
	cin>>ladoA;
	
	cout<<"Informar lado 'B' do triangulo: ";
	cin>>ladoB;
	
	cout<<"Informar lado 'C' do triangulo: ";
	cin>>ladoC;
	
	//aloca os valores dentro do vetor
	triangulo[0] = ladoA;
	triangulo[1] = ladoB;
	triangulo[2] = ladoC;
	
	
	//1. Nesse loopoing: ordena o vetor do menor para o maior.
	//2. Considera-se o maior valor como 'hipotenusa',
	//3. o segundo maior valor como 'cateto adjacente',
	//4. e o menor como 'cateto oposto'.
	for(int temporario = 0, indice = 0; indice <3;indice++)
	{
		for(int contador = 0; contador <3;contador++)
		{
			   if (triangulo[contador] > triangulo[indice])
			   {
			   		temporario = triangulo[indice];
			   		
			   		triangulo[indice] = triangulo[contador];
			   		
			   		triangulo[contador] = temporario;
			   }
		}
	}
		
	/* ***** Listando os números presentes no vetor *****
	cout<<"numero 1: "<<triangulo[0]<<endl;
	cout<<"numero 2: "<<triangulo[1]<<endl;
	cout<<"numero 3: "<<triangulo[2]<<endl;	
	************************************************** */	
	
	//Alocando os valores nessas variáveis para efetuar o 
	catetoOpostoAoQuadrado = triangulo[0] * triangulo[0];
	catetoAdjacenteAoQuadrado = triangulo[1] * triangulo[1];
	hipotenusaAoQuadrado = triangulo[2] * triangulo[2];

	if(hipotenusaAoQuadrado == (catetoOpostoAoQuadrado + catetoAdjacenteAoQuadrado))
	{
		cout<<"\n Esse eh um TRIANGULO RETANGULO";
	}
	else
	{
		cout<<"\n Esse NAO EH um TRIANGULO RETANGULO";
	}
	return 0;
}