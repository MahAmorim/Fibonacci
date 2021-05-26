#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  int termo = 0, ant = 1, atu = 1, prox = 0, i = 0, m[i];

  cout << "Calcular s\x82rie da Sequencia Fibonacci at\x82 o termo escolhido e exibir ao contrario\n\n";
  cout << "Escolha um termo limite para apresentacao: \n";
  cin >> termo;
  while (termo <= 2)
  {
    cout << "Redigite o termo por favor\n";
    cin >> termo;
  }
  m[0] = 0;
  m[1] = 1;
  m[2] = 1;
  for (i = 3; i <= termo; i = i + 1)
  {
    prox = atu + ant;
    m[i] = prox;
    ant = atu;
    atu = prox;
  }
  cout << endl
       << " Sequencia Fibonacci na ordem inversa: ";
  for (i = termo - 1; i > -1; i = i - 1)
  {

    cout << m[i] << ", ";
  }

  cout << endl
       << endl;
  return EXIT_SUCCESS;
}
