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

/*EXERCÍCIO 10: Uma escola com cursos em regime semestral, realiza duas avaliações durante o semestre e
calcula a média do aluno, da seguinte maneira: MEDIA = (P1 + 2P2) / 3

Fazer um programa para entrar via teclado com os valores das notas (P1 e P2) e calcular a
média. Exibir a situação final do aluno (“Aprovado ou Reprovado”), sabendo que a média de
aprovação é igual a cinco.

* #################################################################################################################
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	//DECLARAÇÃO DE VARIÁVEIS

	double notaP1 = 0, notaP2 = 0;// 2 entradas -> nota "P1" e "P2"
	double mediaAluno = 0;// 1 saída: Média das notas "P1" e "P2" do aluno
	
	
	//TÍTULO
	cout<<" ######## CALCULO DAS MEDIAS 'P1 E 'P2' DO ALUNO ########\n\n";
	
	//ENTRADA DE DADOS: 2 entradas (P1 e P2)
	// Solicitando ao usuário informar as 2 notas do aluno -> nota "P1" e "P2"
	cout<<"Informe a nota da P1: ";
	cin>>notaP1;
	cout<<"Informe a nota da P2: ";
	cin>>notaP2;
	
	//CALCULANDO A MÉDIA DO ALUNO
	mediaAluno = (notaP1+(2*notaP2))/3;
	
	if(mediaAluno<5)
	{
		cout<<"\nMedia das notas: "<<mediaAluno<<" -> aluno REPROVADO.\n";
	}	
	else
	{
		cout<<"\nMedia das notas: "<<mediaAluno<<" -> aluno APROVADO.\n";
	}
	
	return 0;
}