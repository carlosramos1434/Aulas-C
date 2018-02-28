#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct Flivros{
	char TituloL[20];
	char NomeAutor[30];
	int CodigoID;
};
int main(){
	struct Flivros Ilivros[2];
	int i;
	
	for(i=0; i<2; i++){
			fflush(stdin);
		printf("Informe o Titulo do livro: \n");
			fgets(Ilivros[i].TituloL,19,stdin);
	
		printf("Informe o nome do autor: \n");
			fgets(Ilivros[i].NomeAutor,29,stdin);
			
			fflush(stdin);
	
		printf("Informe o codigo do livro \n");
			scanf("%d",&Ilivros[i].CodigoID);
			fflush(stdin);
		
	}
	for(i=0; i<2; i++){
		printf("Titulo Do livro %d: %s \nNome do Autor: %s\nCodigo do Livro: %d ",i+1,Ilivros[i].TituloL,Ilivros[i].NomeAutor,Ilivros[i].CodigoID);
	//	printf("Titulo Do livro:  %s \nNome do Autor: %s\nCodigo do Livro ",Ilivros[i].TituloL,Ilivros[i].NomeAutor,Ilivros[].CodigoID);
	}


system("Pause");	
	
}
