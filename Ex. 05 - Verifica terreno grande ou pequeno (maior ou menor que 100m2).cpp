#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	/*DECLARAÇÃO DE VARIÁVEIS*/
	double base = 0, altura = 0, areaRetangulo = 0;
	
	//Título
	cout << "##### AREA DO RETANGULO #####\n\n";
	
	
	//solicita entrada de dados pelo usuário
	cout << "Informe o valor da base (em metros)? -> ";
	cin >> base;
	cout << "Informe o valor da altura (em metros)? -> ";
	cin >> altura;

	//cálculo da área do retângulo
	areaRetangulo = base * altura;
	
	//exibe o valor da área calculada
	cout <<"\nArea do retangulo: "<<areaRetangulo<<"m2 ";
	
	//verifica se o valor de área é maior que 100 (cem)
	if(areaRetangulo > 100.0)
	{
		cout<< " -> Terreno grande";
	}
	else
	{
		cout<< " -> Terreno pequeno";
	}
		
	
	return 0;
}