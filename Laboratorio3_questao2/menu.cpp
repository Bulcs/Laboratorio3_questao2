#include <iostream>
#include "menu.h"
#include "CriarConta.h"
#include "saque.h"
using namespace std;

void Menu::getMenu(){
	int controle;
	cout << "Você deseja:\n1-Criar uma conta no Banco.\n2-Excluir conta no Banco.\n3-Sacar dinheiro.\n4-Depositar.\n5-Visualizar o saldo da conta.\n6-Extrato bancário.\n7-Transferência bancária.\n" << endl;;

	cin >>controle;
	
	if(controle == 1){
			CriarConta p;
			p.setNome("none");
			p.setAgencia(0);
			p.setNumero(0);
			p.setSaldo(0);
			p.setStatus(0);
			p.setLimite(0);
			p.setMovimentacao(0);
	}
	if(controle == 3){
		Saque s;
		if(CriarConta::getStatus(void) == 1){
			CriarConta::getSaldo(void) += s.getSaqueEspecial();
		}
		if(CriarConta::getStatus(void) ==2){
			CriarConta::getSaldo(void) += s.getSaquePadrao();
		}
	}
}
