1  #include <iostream>
2  #include <cstdlib>
3  #include <ctime>
4  using namespace std;
5  
6  int main() {
7      srand(static_cast<unsigned int>(time(nullptr)));
8      int segredo = rand() % 10 + 1;
9      int palpite = 0;
10     int tentativas = 0;
11 
12     while (tentativas < 3 && palpite != segredo) {
13         cout << "Palpite de 1 a 10: ";
14         cin >> palpite;
15         tentativas++;
16 
17         if (palpite == segredo) {
18             cout << "Acertou em " << tentativas << " tentativa(s)!\n";
19         } else if (palpite < segredo) {
20             cout << "Tente um numero maior.\n";
21         } else {
22             cout << "Tente um numero menor.\n";
23         }
24     }
25 
26     if (palpite != segredo) {
27         cout << "Fim! O numero era " << segredo << ".\n";
28     }
29 
30     return 0;
31 }
