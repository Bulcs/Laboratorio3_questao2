#include <iostream>
#include "CriarConta.h"
#include "saque.h"

using namespace std;
string CriarConta::setNome(string nome){

	cout << "Digite seu nome: \n";
	cin >> nome;
	return nome;

}


int CriarConta::setAgencia(int agencia){

	cout << "Digite a Agência: \n";
	cin >> agencia;

	return agencia;
	
}

int CriarConta::setNumero(int numero){
	cout << "Digite o numero da conta: \n";
	cin >> numero;

	return numero;
}

float CriarConta::setSaldo(float saldo){
	saldo = 0;

	return saldo;
}

float CriarConta::getSaldo(float saldo){
	return saldo;
}

int CriarConta::setStatus(int status){
	cout << "Informe se se a conta será especial ou não: \n";
	cout << "A conta especial possui um limite de saque de R$ 4000,00 e a conta padrão R$ 1000,00\n";
	cout << "1-Especial.\n2-Padrão.\n";
	cin >> status;
	
	return status;
}
int CriarConta::getStatus(void){
	return this->status;
}

int CriarConta::setLimite(void){
	if(this-> status==1){
		limite = 4000;
	}
	if(this-> status==2){
		limite =1000;
	}
	return limite;
}

int CriarConta::setMovimentacao(int movimentacao){
	cout << "\n1-Credito/2-Débito/3-Credito e Débito: \n";
	cin >> movimentacao;

	return movimentacao;
}