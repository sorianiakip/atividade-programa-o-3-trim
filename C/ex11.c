1  #include <stdio.h>
2  
3  int main(void) {
4      double salario, bonus, total;
5      printf("Salario base (ex.: 2500.00): ");
6      scanf("%lf", &salario);
7      printf("Bonus em porcentagem: ");
8      scanf("%lf", &bonus);
9  
10     if (salario < 0 || bonus < 0) {
11         printf("Valores invalidos.\n");
12         return 0;
13     }
14 
15     total = salario + salario * bonus / 100;
16     printf("Salario final: R$ %.2f\n", total);
17     return 0;
18 }
