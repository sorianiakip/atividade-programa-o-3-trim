1  <?php
2  echo "Nota final (0 a 10): ";
3  $nota = (float) trim(fgets(STDIN));
4  
5  if ($nota < 0 || $nota > 10) {
6      echo "Nota inválida.\n";
7  } elseif ($nota >= 6) {
8      echo "Aprovado!\n";
9  } else {
10     echo "Em recuperação.\n";
11 }
