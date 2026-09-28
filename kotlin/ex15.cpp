1  #include <iostream>
2  using namespace std;
3  
4  int main() {
5      int vitorias, empates;
6      cout << "Quantidade de vitorias: ";
7      cin >> vitorias;
8      cout << "Quantidade de empates: ";
9      cin >> empates;
10 
11     if (vitorias < 0 || empates < 0) {
12         cout << "Quantidade invalida.\n";
13         return 0;
14     }
15 
16     int pontos = vitorias * 3 + empates;
17     cout << "Pontuacao total: " << pontos << "\n";
18     return 0;
19 }
