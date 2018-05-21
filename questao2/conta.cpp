/**
* @file conta.cpp
* @brief criaçao do conta
* @since 12/05/2018
* @date 15/04/2018
*/

#include <iostream>
#include "conta.h"

using namespace std;
/** @brief chamada no construct */
Conta::Conta(){}
Conta::~Conta(){}
/** @brief chamada dos getters e setters da classe conta */
int Conta::getagencia(){return agencia;}
int Conta::getnumero(){return numero;}
int Conta::getsaldo(){return saldo;}
int Conta::getLimite(){return limite;}
int Conta::getTipo(){return tipo_da_conta;}
void Conta::setagencia(int agencia_){agencia=agencia_;}
void Conta::setnumero(int numero_){numero=numero_;}
void Conta::setsaldo(int saldo_){saldo=saldo_;}
void Conta::setLimite(int limite_){limite = limite_;}
void Conta::setTipo(int tipo_da_conta_){tipo_da_conta = tipo_da_conta_;}
void Conta::setextrato(int n, int a){
/** @brief criação de uma condição */
	if(n==3){
		saque[qtdsaque]=a;
		qtdsaque++;
	}else if(n==4){
		deposito[qtddeposito]=a;
		qtddeposito++;
	}else if(n==5){
		transferencia[qtdtransferencia]=a;
		qtdtransferencia++;
	}
}
/** @brief chamada do método getextrato da classe Conta */
void Conta::getextrato(){
	if(qtdsaque>0){
		for(int i=0;i<qtdsaque;i++){
			cout<<"Você fez "<<qtdsaque<<" saques, o "<<i+1<< " no valor de "<<saque[i]<<endl;
		}
	}
	if(qtddeposito>0){
		for(int i=0;i<qtddeposito;i++){
			cout<<"Você fez "<<qtddeposito<<" depósitos, o "<<i+1<< " no valor de "<<deposito[i]<<endl;
		}
	}
	if(qtdtransferencia>0){
		for(int i=0;i<qtdtransferencia;i++){
			cout<<"Você fez "<<qtdtransferencia<<" transferências, o "<<i+1<< " no valor de "<<transferencia[i]<<endl;
		}
	}
}