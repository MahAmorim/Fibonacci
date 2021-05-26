#include <stdlib.h>
#include <iostream>

using namespace std;

int consist(int termo);
int fibo(int termo);

int main()
{

  int termo = 0;
  cout << "Calcular termo s\x82rie da Sequencia Fibonacci"
       << "\n\n";
  cout << "\n"
       << "Digite posicao desejada: "
       << "\n";
  cin >> termo;

  termo = consist(termo);

  cout << "O Termo presente na posicao pedida \x82: " << fibo(termo) << "\n";

  return 0;
}

int consist(int termo)
{

  while (termo < 1)
  {
    cout << "Redigite o termo por favor\n";
    cin >> termo;
  }
  return termo;
}

int fibo(int termo)
{
  if (termo <= 2)
  {
    if ((termo == 1) || (termo == 2))
    {
      return (1);
    }
  }
  else
  {
    return (fibo(termo - 1) + fibo(termo - 2));
  }
}
