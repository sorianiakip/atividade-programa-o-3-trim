1  #include <iostream>
2  using namespace std;
3  
4  int main() {
5      double nota;
6      cout << "Pontuação (0 a 10): ";
7      cin >> nota;
8  
9      if (nota < 0 || nota > 10) {
10         cout << "Pontuação inválida.\n";
11     } else if (nota < 6) {
12         cout << "Insatisfatório\n";
13     } else if (nota < 8) {
14         cout << "Regular\n";
15     } else if (nota < 9) {
16         cout << "Bom\n";
17     } else {
18         cout << "Excelente\n";
19     }
20     return 0;
21 }
