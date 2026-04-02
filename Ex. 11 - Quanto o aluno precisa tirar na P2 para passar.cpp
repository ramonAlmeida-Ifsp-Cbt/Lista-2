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

Fazer um programa para entrar via teclado com o valor da primeira nota (P1) e o programa
deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) para ser aprovado,
sabendo que a média de aprovação é igual a cinco.

* #################################################################################################################
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	//DECLARAÇÃO DE VARIÁVEIS

	double mediaAluno = 5;// Média 5 é a nota mínima para que o aluno seja aprovado
	double notaP1 = 0, notaP2 = 0;// 1 entrada -> nota "P1".
	//a nota P2 será calculada
	
	
	//TÍTULO
	cout<<" ######## CALCULO - quanto o aluno precisa na 'P2' p/ ser aprovado ########\n\n";
	

	// Solicitando ao usuário informar as 2 notas do aluno -> nota "P1" e "P2"
	cout<<"Informe a nota da P1 do aluno: ";
	cin>>notaP1;

	
	//CALCULANDO A NOTA MÍNIMA DE P2 PARA QUE O ALUNO SEJA APROVADO
	//mediaAluno = (notaP1+(2*notaP2))/3;
	notaP2 = ((mediaAluno*3)-notaP1)/2;
	
	cout<<"\nO aluno precisa tirar nota "<<notaP2<<" para ser APROVADO.\n";

	return 0;
}