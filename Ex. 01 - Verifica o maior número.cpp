#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	/******* Variáveis *******/
	double numA = 0.0, numB = 0.0;
	
	/*************** Títuto ******************/
	cout<<"#### VERIFICA O MAIOR NUMERO #####\n\n";
	
	/**** solicitando ao usuário informar os valores ****/
	cout<<"Digite um valor: ";
	cin>>numA;
	
	cout<<"Digite outro valor (diferente do anterior): ";
	cin>>numB;
	
	/******* verifica qual é o maior ******/
	
	if (numA == numB)
	{
		cout<<"\nNao ha como verificar pois os numeros são iguais.\nO programa vai ser encerrado.\n"; return 0;
	}
	else
	{
		if(numA > numB)
		{
			cout<<"\nO numero "<<numA<<" eh maior que o numero "<<numB<<".";
		}
		else
		{
			cout<<"\nO numero "<<numB<<" eh maior que o numero "<<numA<<".";		
		}
	}
	return 0;
}
