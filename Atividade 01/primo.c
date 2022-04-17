#include<stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0; //Fator divisível 
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", num); //Retorna se o numero é primo ou não
 else
    printf("%d não é um número primo\n", num);
 
 return 0;
}