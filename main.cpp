#include <iostream>
using namespace std;

const int QTDE_AMOSTRAS = 5;
const int CONCENTRACAO_MAXIMA = 15;
/* 
  leAmostras (amostras)
  Realiza a leitura de amostras que podem variar de 0 até 15.
  amostras: vetor de amostras de tamanho QTDE_AMOSTRAS
*/
void leAmostras (float amostras[QTDE_AMOSTRAS]) {
  for (int i = 0; i < QTDE_AMOSTRAS; i++) {
    cin >> amostras[i];
  } // fim for
}

/*
  imprimeAmostras (amostras)
  Imprime as amostras
  amostras: vetor de amostras de tamanho QTDE_AMOSTRAS
*/
void imprimeAmostras (float amostras[QTDE_AMOSTRAS]) {
  for (int i = 0; i < QTDE_AMOSTRAS; i++)
    cout << amostras[i] << "\t";
  cout << endl;
}

/*
  amostraMinima (amostras) : minima
  Retorna o valor mínimo de todas as amostras.
*/
float amostraMinima (float amostras[QTDE_AMOSTRAS]) {
  float minima = amostras[0];
  for (int i = 1; i < QTDE_AMOSTRAS; i++)
    if (amostras[i] < minima)
      minima = amostras[i];
  return minima;
}

/* 
  amostraMaxima (amostras) : maxima
  Retorna o valor máximo de todas as amostras.
*/
float amostraMaxima (float amostras[QTDE_AMOSTRAS]) {
  float maxima = amostras[0];
  /* 
    Verifique se existe uma amostra[i] que seja maior
    que o valor da variável maxima
  */
  return maxima;
}

/* 
  normalizaAmostras (amostras)
  para cada amostra[i], calcule:
  amostra[i] = (amostras[i] - minima)
              ------------------------
                  (maxima - minima)
*/
void normalizaAmostras (float amostras[QTDE_AMOSTRAS]) {
  float minima = amostraMinima (amostras);
  float maxima = amostraMaxima (amostras);
  /*
    Para cada amostras[i] execute
    amostras[i] = (amostras[i] - minima) / (maxima-minima);
  */
  for (int i = 0; i < QTDE_AMOSTRAS; i++) {
    amostras[i] = (amostras[i] - minima) / (maxima - minima);
  }
}

/* 
  mediaAmostras (amostras): media
  Retorne a média das amostras normalizadas desconsiderando uma amostra.
*/
float mediaAmostras (float amostras[QTDE_AMOSTRAS]) {
  float soma = 0;
  /* 
    Some cada amostras[i]
  */
  return soma / (QTDE_AMOSTRAS - 1);
}

int main() {
  float amostras [QTDE_AMOSTRAS];

  leAmostras (amostras);
  normalizaAmostras (amostras);
  cout << "Media: " << mediaAmostras (amostras) * CONCENTRACAO_MAXIMA << endl;

  return 0;
}
