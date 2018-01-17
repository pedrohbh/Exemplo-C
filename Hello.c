#include <stdio.h>


int main()
{
   int a;
   int b;
   printf("Olá mundo!\n");
   printf("Digite dois números: ");
   scanf("%d %d", &a, &b );
   
   printf("A soma dos dois números é: %d\n", (a + b));
   return 0;
}
