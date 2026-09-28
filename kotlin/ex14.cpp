1  #include <iostream>
2  #include <string>
3  using namespace std;
4  
5  int main() {
6      string nome;
7      int nivel;
8      cout << "Nome do jogador: ";
9      getline(cin, nome);
10     cout << "Nivel: ";
11     cin >> nivel;
12 
13     cout << "\nJOGADOR CADASTRADO\n";
14     cout << "Nome: " << nome << "\n";
15     cout << "Nivel: " << nivel << "\n";
16     return 0;
17 }
