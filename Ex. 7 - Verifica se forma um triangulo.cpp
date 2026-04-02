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

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	/* #########################################
	####### Para existir Triângulo... ##########
	### ...há as seguintes condições:         ##
	##										   #
	## Lados: a, b c                           #
	## • soma dos lados ("B" + "C") > lado "A" #
	## • soma dos lados ("A" + "C") > lado "B" #
	## • soma dos lados ("A" + "B") > lado "C" #
	###                                       ##
	###########################################*/
	
	//OBS: As três condições devem ser satisfeitas.
	
	//Declaração de variáveis - lados do triângulo (A, B, C)
	double ladoA = 0.0, ladoB = 0.0, ladoC = 0.0;
	
	//Solicita ao usuário informar os valores dos lados do triângulo.
	cout<<"Informar lado 'A' do triangulo: ";
	cin>>ladoA;
	
	cout<<"Informar lado 'B' do triangulo: ";
	cin>>ladoB;
	
	cout<<"Informar lado 'C' do triangulo: ";
	cin>>ladoC;

	//verifica se os lados formam um triângulo
	if(((ladoA + ladoB) > ladoC) && ((ladoA + ladoC) > ladoB) && ((ladoB + ladoC) > ladoA))
	{
	
		//verifica se é EQUILÁTERO
		if((ladoA == ladoB) && (ladoB == ladoC))
		{
			cout<<"\nEsse eh um triangulo EQUILATERO\n";
		}
		else
		{
			//verifica se é ISÓSCELES
			if((ladoA == ladoB) || (ladoB == ladoC) || (ladoA == ladoC))
			{
				cout<<"\nEsse eh um triangulo ISOSCELES\n";
			}
			else
			{
				//Se não for EQUILÁTERO nem ISÓSCELES, então é ESCALENO.
				cout<<"\nEsse eh um triangulo ESCALENO\n";
			}
		}  	 	 
			   
	  	  	  	
	}
	else
	{
		cout<<"\nEssas medidas nao formam um triangulo\n";
	}
	
	return 0;
}
