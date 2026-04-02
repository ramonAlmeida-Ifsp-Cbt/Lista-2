#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	//DECLARAÇÃO DE VARIÁVEIS
	double peso = 0.0, altura = 0.0, calculoImc = 0.0;
	
	cout<<"Informe o valor do seu peso (em quilogramas -> 'kg' ): ";
	cin>>peso;
	cout<<"Informe o valor de sua altura (em metros -> 'm'): ";
	cin>>altura;
	
	//Cálculo do "IMC" (Índice de Massa Corporal)
	//IMC = peso/ altura²
	calculoImc = peso/ (altura * altura);
	
	//exibe o resultado do IMC
	cout<<"fator IMC: "<<calculoImc<<" -> ";
	
	 if(calculoImc < 20.0)
	 {
	 	cout<<"Abaixo do peso.";
	 }
	 else
	 {
		 if (calculoImc >= 25.0)
		 {
		 	cout<<"Acima do peso.";
		 }
		 	 
		  else
		  {
			  cout<<"Peso ideal.";
		  }
	 }
	 
	 return 0;
}