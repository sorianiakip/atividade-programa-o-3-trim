1  <?php
2  echo "Preço unitário (ex.: 12.50): ";
3  $preco = (float) trim(fgets(STDIN));
4  echo "Quantidade: ";
5  $quantidade = (int) trim(fgets(STDIN));
6  
7  if ($preco < 0 || $quantidade < 0) {
8      echo "Valores inválidos.\n";
9      exit;
10 }
11 
12 $total = $preco * $quantidade;
13 echo "Total: R$ " . number_format($total, 2, ',', '.') . "\n";
