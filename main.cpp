/**
* @file main.cpp
* @brief criaçao do main
* @since 12/05/2018
* @date 15/04/2018
*/
#include <iostream>
#include "cabecalho.h"
#include "conta.h"
#include "procedimentos.h"
/** 
*@brief Chamada do main
*/
int main(){
	/**@brief Instanciação do objeto conta */
	Conta *conta;
	conta=new Conta[100];
	/**@brief chamando o método cabeccalho que recebe como parâmetro conta */
	cabeccalho(conta);
	return 0;
}

