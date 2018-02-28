#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int m[4][4];
	float sm=0, media;
	int x,i;
	
	printf("informe os dados da matriz! \n");
	for(x=0; x<4; x++){
		for(i=0; i<4; i++){
			scanf("%d",&m[x][i]);	
		}		
	}
	
	for(x=0; x<4; x++){
		for(i=0; i<4; i++){
			if(x == i){
				sm += m[x][i];
			}	
		}		
	}
	media = sm/4;
	
	printf("\n");
	
	for(x=0; x<4; x++){
		for(i=0; i<4; i++){
			printf("\n %d ",m[x][i]);
		}
		printf("\n");
	}
	printf("A soma dos valores %f \n media do valores %f !",sm,media);
	
	
	
}
