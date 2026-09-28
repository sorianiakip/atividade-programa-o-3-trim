1  #include <stdio.h>
2  
3  int main(void) {
4      int inicio;
5      printf("Iniciar contagem regressiva de: ");
6      scanf("%d", &inicio);
7  
8      if (inicio < 0) {
9          printf("Informe um numero nao negativo.\n");
10         return 0;
11     }
12 
13     for (int numero = inicio; numero >= 0; numero--) {
14         printf("%d\n", numero);
15     }
16 
17     printf("Fim da contagem!\n");
18     return 0;
19 }
