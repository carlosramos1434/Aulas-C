#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct TAtleta{
	int matriculaAt[50];
	int idAt[3];
	float alAt[5];
};
main(){
	struct TAtleta AtletasCepe[3];
	int i , id=0, at=0, n, b;
	
	for(i=0; i<3 ;i++){
		printf("informe o numero da matricula: ");
			scanf("%d",&AtletasCepe[i].matriculaAt);
		
		printf("informe a idade: ");
			scanf("%d",&AtletasCepe[i].idAt);
			id += AtletasCepe[i].idAt;
		
		printf("informe a altura: ");
			scanf("%d",&AtletasCepe[i].alAt);
			at += AtletasCepe[i].alAt;
			
	} 
	n= id /3;
	b = at /3;
	
	for(i=0; i<3 ;i++){
		printf("Numero da matricula: %d \n",AtletasCepe[i].matriculaAt);
		printf("Idade: %d \n",AtletasCepe[i].idAt);
		printf("Alturas: %d \n",AtletasCepe[i].alAt);
		
		printf("Media da Alturas: %d \n",b);
		printf("Media das idades: %d \n",n);
	
	}
	
	
	
}
