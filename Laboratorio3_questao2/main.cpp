#include <iostream>
#include "menu.h"
#include "CriarConta.h"
#include "saque.h"
using namespace std;

int main(int argc, char const *argv[])
{
	char sair='s';

	while(sair == 's'){
	Menu m;
	m.getMenu();
	cout << "Fazer mais alguma operação?[s/n]";
	cin >> sair;
	cout <<"\n";
	}
	return 0;
}