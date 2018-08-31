#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float altura, peso_f, peso_m;
	char sexo[1];
	printf("Digite a inicial do seu sexo \nSendo M para masculino ou F para feminino: ");
	scanf("%c", &sexo);
	
	if(strcmp(sexo, "m")==0){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		peso_m = (72.7*altura)-58;
		printf("Você é do sexo masculino e seu peso ideal é aproximadamente %.2f Kg", peso_m);
	}
	else if(strcmp(sexo, "f")==0){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		peso_f = (62.1*altura)-44.7;
		printf("Você é do sexo feminino e seu peso ideal é aproximadamente %.2f Kg", peso_f);
	}
	else{
		printf("Sexo invalido");
	}
	getch();
	return 0;
}
