#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//DECLARAÇÃO DE VARIÁVEIS//
	string textoSaida[3] {"primeiro", "segundo", "terceiro"};
	double temporario =0;
	double numeros[3] {0,0,0};
		/*vetor numeros[3] -> esse vetor/ matriz  é de 1 coluna e 3 células/ espaços.
			numeros[0]: primeiro índice/ espaço
			numeros[1]: segundo índice/ espaço
			numeros[2]: terceiro índice/ espaço
			
			Todos essas células/ espaços começam contendo o valor "0.0" (zero).
		*/
	
	//título
	cout<<"##### VERIFICA O MAIOR ENTRE TRES NUMEROS #####\n\n";	
		
	//A cada looping é solicitado aqui ao usuário informar os três números
	for(int indice = 0; indice <3; indice++)
	{
		   	cout<<"Informe o "<<textoSaida[indice]<<" numero: "; //texto de saída
			cin>>numeros[indice];// recebe o número e o aloca no vetor
	}
	
	
	//verifica primeiro se os três números são iguais.
	if(numeros[0] == numeros[1] && numeros[0] == numeros[2])
	{
		cout<<"\n -> Os numeros sao identicos!\n";
	}
	else
	{
		
		//ordena os números dentro do vetor: do menor para o maior.
		//Então, o último índica, o 'numeros[2]' ficará c/ o maior valor.
		
		for(int indice = 0; indice <3;indice++)
		{
			for(int contador = 0; contador <3;contador++)
			{
				   if (numeros[contador] > numeros[indice])
				   {''
				   		temporario = numeros[indice];
				   		
				   		numeros[indice] = numeros[contador];
				   		
				   		numeros[contador] = temporario;
				   }
			}
		}
		
			cout<<"\n\n";
	
			//Exibe a lista de números
		//cout<<"numero 1: "<<numeros[0]<<endl;
		/*cout<<"numero 2: "<<numeros[1]<<endl;
		cout<<"(O maior) -> numero : "<<numeros[2]<<endl; //é exibido o maior valor, que consta no primeiro índice do vetor.
	}
	
	return 0;
	
}