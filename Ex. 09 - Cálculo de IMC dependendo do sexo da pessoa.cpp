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
/*EXERCÍCIO 9 - Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a digitação, exibir se esta
pessoa está ou não com seu peso ideal. Veja tabela da relação peso/altura².

[Femininos]
R < 19: Abaixo do peso
19 <= R < 24: Peso ideal
R >= 24: Acima do peso

[Masculino]
R < 20: Abaixo do peso
20 <= R < 25: Peso ideal
R >= 25: Acima do peso
* #################################################################################################################
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//DECLARAÇÃO DE VARIÁVEIS
	double peso = 0.0, altura = 0.0, calculoImc = 0.0;
	int sexo = 0, limiteMinimo = 0, limiteMaximo = 0; // estados: 1 -> masculino, 2 -> feminino 
	
	cout<<"Informe o valor do seu peso (em quilogramas -> 'kg' ): ";
	cin>>peso;
	cout<<"Informe o valor de sua altura (em metros -> 'm'): ";
	cin>>altura;
	cout<<"\n\n[SEXO]\n1 - 'masculino'\n2 - 'feminino'\nInforme o sexo (1 - 'm'/2 - 'f') -> ";
	cin>>sexo;
	
	//Cálculo do "IMC" (Índice de Massa Corporal)
	//IMC = peso/ altura²
	calculoImc = peso/ (altura * altura);
	cout<<"\nIMC: "<<calculoImc;
	
	//######### determinando os limites máximo e mínimo, conforme o sexo que o usuário informar
	if(sexo == 1)
	{
		   limiteMinimo = 19;
		   limiteMaximo = 24;	
	}
	else
	{
		if(sexo == 2)
		{
			limiteMinimo = 20; limiteMaximo = 25;
		} 
		else
		{
			cout<<"Erro -> Informe corretamente o sexo (1 - 'm'/2 - 'f')";
			return 0;
		}
	}	
	//******************************************************************
	// verificando o fator IMC dentro dos limites
	if (calculoImc < limiteMinimo)
			cout<<" -> Abaixo do peso";
	else
		if (calculoImc > limiteMaximo)
			cout<<" -> Acima do peso";
		else
			cout<<" -> Peso ideal";	

	return 0;
}


