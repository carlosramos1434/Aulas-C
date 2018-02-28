struct TAtleta{
	int matriculaAt[50];
	int idAt[3];
	float alAt[5];
};
main(){
	struct TAtleta AtletasCepe[15];
	int i, cont;
	float at, id;
	
	for(i=0; i<15 ;i++){
		printf("informe o numero da matricula: ");
			scanf("%d",&AtletasCepe[i].matriculaAt);
		
		printf("informe a idade: ");
			scanf("%d",&AtletasCepe[i].idAt);
			
		printf("informe a altura: ");
			scanf("%f",&AtletasCepe[i].alAt);
		cont++;
		
		id =AtletasCepe[i].idAt / cont ;
		at =AtletasCepe[i].alAt / cont ;
		
	} 
	for(i=0; i<15 i++){
		printf("Numero da matricula: %d ",AtletasCepe[i].matriculaAt);
		printf("Idade: %d ",AtletasCepe[i].idAt);
		printf("Alturas: %f ",AtletasCepe[i].alAt);
		
		printf("Media da Alturas: %f ",at);
		printf("Media das idades: %f ",id);
	
	}
	
	
	
}
