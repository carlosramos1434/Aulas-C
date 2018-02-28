#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int v[10];
	int x,m,n;
	
	printf("informe os valores para o v: \n");
	for(x=0; x<10; x++){
		scanf("%d",&v[x]);
	}
	m= v[x];
	n= v[x];
	for(x=0;x<10; x++){
		if(v[x]>m){
			m=v[x];
		}
		if(v[x]<n){
			n=v[x];
		}
		
	}
	printf("o maior valor e: %d ",m);
	printf("\no menor valor e: %d ",n);
}
