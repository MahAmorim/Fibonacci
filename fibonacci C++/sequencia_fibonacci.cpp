#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int termo = 0, ant = 1, atu = 1, prox = 0;
	
	cout<<"Calcular s\x82rie da Sequencia Fibonacci at\x82 o termo escolhido\n\n";
	cout<<"Escolha um termo: \n";
	cin>>termo;
	while(termo <= 2)
	{
		cout<<"Redigite o termo por favor\n";	
		cin>>termo;
	}
	cout<<ant<<atu;
	while(termo>2)
	{
	    prox = atu + ant;
		ant = atu;
		atu = prox;
		cout<<prox;
		termo = termo - 1 ;
    }
	
	return 0;
}
