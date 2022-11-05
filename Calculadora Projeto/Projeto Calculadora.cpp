#include <stdio.h>
#include <stdlib.h>

int main (){

int a1, a2, son, di, sub, mult;

printf("Digite o primeiro valor: \n");
scanf("%d", &a1);

printf("Digite o segundo valor: \n");
scanf("%d", &a2);

son = a1 + a2;
di = a1 / a2;
sub = a1 - a2;
mult = a1 * a2;

printf("\n Resultados: \n");
printf("\n A soma do primeiro valor mais o segundo foi %d.", son);
printf("\n A divisao do primeiro valor com o segundo foi %d.", di);
printf("\n A subtracao do primeiro valor com segundo foi %d.", sub);
printf("\n A multiplicacao do primeiro valor mais o segundo foi %d.", mult);

system("pause");


}



