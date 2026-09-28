1  using System;
2  
3  Console.Write("Quantidade em estoque: ");
4  int quantidade = int.Parse(Console.ReadLine() ?? "0");
5  
6  if (quantidade < 0) {
7      Console.WriteLine("Quantidade invalida.");
8  } else if (quantidade == 0) {
9      Console.WriteLine("Produto esgotado.");
10 } else if (quantidade <= 5) {
11     Console.WriteLine("Estoque baixo.");
12 } else {
13     Console.WriteLine("Estoque disponivel.");
14 }
