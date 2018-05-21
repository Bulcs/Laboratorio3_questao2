/**
* @file cabecalho.cpp
* @brief criaçao do cabeçalho
* @since 12/05/2018
* @date 15/04/2018
*/
#include <iostream>
#include <vector>
#include "cabecalho.h"
#include "procedimentos.h"
#include "conta.h"

using namespace std;
/**@brief Instanciação do método cabeccalho */
void cabeccalho(Conta *conta){
/** 
@brief criação dos parâmetros int
@param n representa o número para usar o menu
@param c parâmetro que receberá a agência ao chamar criarconta()
@param s representa o saque
@param agencia representa a Agência
@param numero representa o numero da conta
@param numero1 representa o numero da conta
@param agencia1 representa o numero da conta
 */
	int n,c=0,s,agencia,numero,numero1,agencia1;
/**@brief criação do laço que repetirá o programa */
	while(n!=8){
	cout <<"|-------------------------------------------|" << endl; 
	cout <<"|-----Digite um dos números para prosseguir:|"<<endl;
	cout <<"|-------------1-Criar Conta:----------------|"<<endl;
	cout <<"|-------------2-Extrato da conta:-----------|"<<endl;
	cout <<"|-------------3-Saque:----------------------|"<<endl;
	cout <<"|-------------4-Depósito:-------------------|"<<endl;
	cout <<"|-------------5-Emissao do Saldo:-----------|"<<endl;
	cout <<"|-------------6-Transferência:--------------|"<<endl;
	cout <<"|-------------7-Excluir Conta:--------------|"<<endl;
	cout <<"|-------------8-Sair------------------------|"<<endl;
	cout <<"|-------------------------------------------|" << endl; 
/** @brief leitura do parâmetro n */
	cin>>n;
/** @brief caso seja digitado o número 1, chama o método criarconta */
	if(n==1){
		cout << "\n" << endl;
/** @brief chamada do método criarconta, usando c e conta como parâmetros */
		criarconta(c,conta);
/** @brief somando +1 a c para mudar a agencia  */
		c++;
		cout << "\n" << endl;
	}
/** @brief caso seja digitado o número 2, chama o método extrato */
	else if(n==2){
		cout<<"\n"<<endl;
		cout <<"Qual a agência da conta?"<<endl;
/** @brief leitura do parâmetro agencia */
		cin>>agencia;
		cout <<"Qual o número da conta?"<<endl;
/** @brief leitura do parâmetro numero */
		cin>>numero;
/** @brief chamada do modo extrado, usando agencia e conta como parâmetros */
		extrato(agencia,conta);
		cout<<"\n"<<endl;
	}
/** @brief caso seja digitado o número 3, chama o método saque */
	else if(n==3){
		cout<<"\n"<<endl;
		cout <<"Qual a agência da conta?"<<endl;
/** @brief leitura do parâmetro agencia */
		cin>>agencia;
		cout <<"Qual o número da conta?"<<endl;
/** @brief leitura do parâmetro numero */
		cin>>numero;
		cout <<"Quando deseja sacar?"<<endl;
/** @brief leitura do parâmetro s */
		cin>>s;
/** @brief chamada do método saque, usando agencia, s e conta como parâmetros */
		saque(agencia,s,conta);
		cout<<"\n"<<endl;
	}
/** @brief caso seja digitado o número 4, chama o método depositar */
	else if(n==4){
		cout<<"\n"<<endl;
		cout <<"Qual a agência da conta?"<<endl;
/** @brief leitura do parâmetro agencia */
		cin>>agencia;
		cout <<"Qual o número da conta?"<<endl;
/** @brief leitura do parâmetro numero */
		cin>>numero;
		cout <<"Quanto deseja depositar?"<<endl;
/** @brief leitura do parâmetro s */
		cin>>s;
/** @brief chamada do método depositar, com agencia, s e conta como parâmetros */
		depositar(agencia,s,conta);
		cout<<"\n"<<endl;
	}
/** @brief caso seja digitado o número 5, chama o método emissaosaldo */
	else if(n==5){
		cout<<"\n"<<endl;
		cout <<"Qual a agência da conta?"<<endl;
/** @brief leitura do parâmetro agencia */
		cin>>agencia;
		cout <<"Qual o número da conta?"<<endl;
/** @brief leitura do parâmetro numero */
		cin>>numero;
/** @brief chamada do método emissaosaldo, com agencia e conta como parâmetros */
		emissaosaldo(agencia,conta);
		cout<<"\n"<<endl;
	}
/** @brief caso seja digitado o número 6, chama o método transferencia */
	else if(n==6){
		cout<<"\n"<<endl;
		cout <<"Qual a agência da conta?"<<endl;
/** @brief leitura do parâmetro agencia */
		cin>>agencia;
		cout <<"Qual o número da conta?"<<endl;
/** @brief leitura do parâmetro numero */
		cin>>numero;
		cout <<"Para qual agência deseja tranferir?"<<endl;
/** @brief leitura do parâmetro agencia1 - da conta no qual deseja transferir */
		cin>>agencia1;
		cout <<"Qual o número da conta em que deseja transferir?"<<endl;
/** @brief leitura do parâmetro numero1 - da conta no qual deseja transferir */
		cin>>numero1;
		cout <<"Quanto deseja transferir?"<<endl;
/** @brief leitura do parâmetro s */
		cin>>s;
/** @brief chamada do método transferencia, com agencia, conta, agencia1,s como parâmetros */
		transferencia(agencia,conta,agencia1,s);
		cout<<"\n"<<endl;
	}
	/** @brief caso seja digitado o número 7 */
	else if(n == 7){
		cout << "Qual conta deseja deletar?\nDigite a agencia da conta: "<< endl;
	/** @brief leitura do parâmetro agencia */
		cin >> agencia;
		cout << "Digite o numero da conta: " << endl;
	/** @brief leitura do parâmetro numero */
		cin >> numero;
	/** @brief chamada do método deletarconta, com agencia e conta como parâmetros */
		deletarconta(agencia,conta);

		cout << "Conta agencia: " << agencia << " numero da conta: " << numero << " foi deletada!"<< endl;	
	}
}
}
