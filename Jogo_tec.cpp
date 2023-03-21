#include <stdio.h>

int main() {
	
	int resp,acert,err;
	
	err = 0;

	printf("Bem Vindo ao jogo Tec \n");
	
	printf("1- Quantos bits tem um byte? \n 1 para a)12. \n 2 para b)10 \n 3 para c)8 \n"); 
		scanf("%d", &resp);
	
			if (resp == 3) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra C)\n");
				err++;
			}
			
	printf("2- Qual a Sigla da Linguagem de marcacao utilizada na web? \n 1 para a)Css. \n 2 para b)Javascript \n 3 para c)HTML \n"); 
		scanf("%d", &resp);
	
			if (resp == 3) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra C)\n");
				err++;
			}
	
	printf("3- Qual o simbolo que verifica se um numero é maior que outro? \n 1 para a)>. \n 2 para b)< \n 3 para c)/ \n"); 
		scanf("%d", &resp);
	
			if (resp == 1) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra a)\n");
				err++;
			}
	
	printf("4- Qual a extensao de um arquivo em c ? \n 1 para a).c++. \n 2 para b).ccc \n 3 para c).cpp \n"); 
		scanf("%d", &resp);
	
			if (resp == 3) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra C)\n");
				err++;
			}
			
	printf("5- Qual a extensao de um arquivo HTML? \n 1 para a).htp. \n 2 para b).html \n 3 para c).htl \n"); 
		scanf("%d", &resp);
	
			if (resp == 2) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra b)\n");
				err++;
			}
			
	printf("6- Qual a extensao da linguagem de estilo ? \n 1 para a).cvv. \n 2 para b).css \n 3 para c).cee \n"); 
		scanf("%d", &resp);
	
			if (resp == 2) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra b)\n");
				err++;
			}
	
	printf("7- Qual comando que limpa a tela do cmd ? \n 1 para a).clear. \n 2 para b)cls \n 3 para c)clean \n"); 
		scanf("%d", &resp);
	
			if (resp == 2) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra b)\n");
				err++;
			}		
	
	printf("8- Qual o nome do sistema Operacional da Microsoft ? \n 1 para a)Linux. \n 2 para b)MS DOS \n 3 para c)Windows \n"); 
		scanf("%d", &resp);
	
			if (resp == 3) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra C)\n");
				err++;
			}
		
	printf("9- Qual o tipo de variavel para armazenar um numero inteiro ? \n 1 para a)long. \n 2 para b)int \n 3 para c)float \n"); 
		scanf("%d", &resp);
	
			if (resp == 2) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra b)\n");
				err++;
			}
			
	printf("10- Qual o tipo de variavel para armazenar um numero decimal ? \n 1 para a)int \n 2 para b)char \n 3 para c)float \n"); 
		scanf("%d", &resp);
	
			if (resp == 3) {
				printf("Resposta Correta\n");
				acert++;	
			}
			else{
				printf("Voce Errou! \n A resposta correta e letra C)\n");
				err++;
			}

	printf("Acertos: ");	
	printf("%d \n",acert );
	
	printf("Erros: ");	
	printf("%d \n",err );
	return 0;
}

