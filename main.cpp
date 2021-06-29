#include <cstring>
#include <iostream>
using namespace std;

const int TAMANHO_TITULO= 127;

/* 
  trocaTracoPorEspaco (tituloURL)
  Troque um traco por um espaço em branco.
*/
void trocaTracoPorEspaco (char tituloURL[]) {
  for (int conta = 0; conta < strlen (tituloURL); conta++) {
    if (tituloURL[conta] == '-')
      tituloURL[conta] = ' ';
  }
}

/* 
  transformaMaiuscula (letra)
  Troque uma letra minúscula por uma letra maiúscula.
*/
char transformaMaiuscula (char letra) {
  if (letra >= 'a' && letra <= 'z')
    return (char) (letra - 'a' + 'A');
  return letra;
}

/* 
  modificaTitulo (tituloURL)
*/
void modificaTitulo (char tituloURL[]) {
  // Troque um traço por um espaço em branco
  trocaTracoPorEspaco (tituloURL);
  // A primeira letra do titulo deve ser maiúscula
  tituloURL[0] = transformaMaiuscula (tituloURL[0]);
  // A primeira letra após o espaço em branco
  // deve ser uma letra maiúscula
}

int main() {
  char tituloURL [TAMANHO_TITULO+1];

  cin >> tituloURL;

  modificaTitulo (tituloURL);

  cout << tituloURL << endl;

  return 0;
}
