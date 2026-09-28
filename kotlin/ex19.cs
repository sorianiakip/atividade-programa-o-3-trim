1  using System;
2  using System.Globalization;
3  
4  Console.Write("Salario base (ex.: 2500.00): ");
5  double salario = double.Parse(Console.ReadLine() ?? "0", CultureInfo.InvariantCulture);
6  Console.Write("Percentual de bonus: ");
7  double percentual = double.Parse(Console.ReadLine() ?? "0", CultureInfo.InvariantCulture);
8  
9  if (salario < 0 || percentual < 0) {
10     Console.WriteLine("Valores invalidos.");
11 } else {
12     double comissao = salario * percentual / 100;
13     Console.WriteLine($"Comissao: R$ {comissao:F2}");
14     Console.WriteLine($"Total: R$ {(salario + comissao):F2}");
15 }
