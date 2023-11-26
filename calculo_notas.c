#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char nome[30];
	float n1, n2, n3, n4, media;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("\nBem vindo(a) ao calculo de notas, %s!\n", nome);
	
	printf("\n\tNota 1: ");
	scanf("%f", &n1);
	printf("\n\tNota 2: ");
	scanf("%f", &n2);
	printf("\n\tNota 3: ");
	scanf("%f", &n3);
	printf("\n\tNota 4: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("\nMedia das notas: %.2f\n\n", media);
	
	if(media >= 7){
		printf("\tAluno: %s\n\n", nome);
		printf("\tAprovado\n\n\a");
	}
	
	else{
		if(media >= 4){
			printf("\tAluno: %s\n\n", nome);
		    printf("\tExame\n\n\a");
		}
		else{
			printf("\tAluno: %s\n\n", nome);
		    printf("\tReprovado\n\n\a");
		}
		
	}
		system("pause");
		
}
