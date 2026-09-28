1  #include <stdio.h>
2  
3  int main(void) {
4      int primeiro, segundo;
5      printf("Primeiro numero: ");
6      scanf("%d", &primeiro);
7      printf("Segundo numero: ");
8      scanf("%d", &segundo);
9  
10     if (primeiro == segundo) {
11         printf("Os dois numeros sao iguais.\n");
12     } else if (primeiro > segundo) {
13         printf("Maior: %d\n", primeiro);
14         printf("Menor: %d\n", segundo);
15     } else {
16         printf("Maior: %d\n", segundo);
17         printf("Menor: %d\n", primeiro);
18     }
19 
20     return 0;
21 }
