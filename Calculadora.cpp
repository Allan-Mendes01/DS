#include <stdio.h>

int main () {
	
int num1, num2, res, op;

printf ("Digite o primeiro numero:");
scanf ("%d", &num1);

printf ("Digite o segundo numero:");
scanf ("%d", &num2);

printf ("Escolha\n\n");
printf ("1-Adicao\n");
printf ("2-subtracao\n");
printf ("3-multiplicacao\n");
printf ("4-divisao\n");

scanf ("%d" ,&op);

switch (op)

{
	case 1: 
	res = num1 + num2;
	printf ("Resultado %d\n\n", res);
	break;
	
	case 2: 
	if (num1>num2) {
	res = num1 - num2;
	printf ("Resultado %d\n\n", res);
	}
	else{	
	res = num2 - num1;
	printf ("Resultado %d\n\n", res);
	}
	break;
	
	case 3:
	res = num1*num2;
	printf ("Resultado %d\n\n", res);
	break;
	
	case 4:
	if (num1>num2) {
	res = num1 / num2;
	printf ("Resultado %d\n\n", res);
	}
	else{	
	res = num2 / num1;
	printf ("Resultado %d\n\n", res);
	}
	
}
return 0;
}
