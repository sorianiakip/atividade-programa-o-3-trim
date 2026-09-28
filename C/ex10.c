1  #include <stdio.h>
2  
3  int main(void) {
4      char produto[] = "Mouse";
5      int quantidade = 3;
6      float preco = 45.00f;
7  
8      printf("APRESENTAÇÃO DE PRODUTO\n");
9      printf("Produto: %s\n", produto);
10     printf("Quantidade: %d\n", quantidade);
11     printf("Preço: R$ %.2f\n", preco);
12     return 0;
13 }
