#include<stdio.h>

main()
{
	int lin, col;
	int mat[3][3];
	
	//Insere os valores da matriz nas suas respectivas linhas e colunas
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++){
			printf("Digite o valor desejado na linha %d e na coluna %d na matriz: ", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}
	
	//Exibir matriz
	printf("\n*---Exibir a primeira matriz---*\n\n");
	
	for(lin=0;lin<=2;lin++)	{
		for(col=0; col<=2; col++)	
			printf("%d  ", mat[lin][col]);
			printf("\n");
	}

	//Multiplicar os valores da primeira matriz por 5
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++)
			mat[lin][col]=mat[lin][col]*5;
	}
	
	//Exibir os valores multiplcados por 5
	printf("\n*---Matriz com elementos multiplicados por 5---*\n\n");
	
	for(lin=0;lin<=2;lin++){
		for(col=0;col<=2;col++)
			printf("%d  ", mat[lin][col]);
			printf("\n");		
	}
	
return 0;

}






	
	
	


