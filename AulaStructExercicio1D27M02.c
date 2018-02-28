#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct fAluno{
	char nome[20];
	char nDisciplina[30];
	float Nota1, Nota2;
}Ialunos;
int main(){
	printf("Informe o nome do aluno: \n");
	fgets(Ialunos.nome,19,stdin);
	
	printf("Informe o nome da disciplina: \n");
	fgets(Ialunos.nDisciplina,29,stdin);
	
	printf("Informe a nota 1: nota 2:");
	scanf("%f %f",&Ialunos.Nota1, &Ialunos.Nota2);
	
	printf("Nome: %s \nDisciplina: %s\nNota 1: %f\nNota 2: %f",Ialunos.nome,Ialunos.nDisciplina,Ialunos.Nota1,Ialunos.Nota2);
	
	
system("Pause");	
	
}
