/**
* @file conta.h
* @brief criaçao dos param e métodos da classe conta
* @since 12/05/2018
* @date 15/04/2018
*/

#ifndef CONTA_H
#define CONTA_H

class Conta{
private:
	/** 
	@brief criação dos parâmetros int
	@param agencia representa a agencia
	@param numero representa o numero da conta
	@param saldo representa o saldo
	@param extrato representa o extrato
	@param limite representa o lmite da conta
	@param tipo_da_conta representa o se vai ser conta corrente ou poupança
	@param saque representa o saque
	@param qtdsaque representa as quantidades de saques efetuadas
	@param deposito representa o deposito
	@param qtddeposito representa as quantidade de depositos feitas
	@param transferencia representa a operação de transferencia entre contas
	@param qtdtranferencia representa a quantidade de transferencias feitas
 */
		int agencia;
		int numero;
		int saldo;
		int extrato;
		int limite;
		int tipo_da_conta;
			int saque[300]={0};
			int qtdsaque=0;
			int deposito[300]={0};
			int qtddeposito=0;
			int transferencia[300]={0};
			int qtdtransferencia=0;
public:
/** @brief Implementação do contrutor */
		Conta();
		~Conta();
/** @brief chamada dos getters e setters da classe conta */
		int getagencia();
		void setagencia(int agencia_);
		int getTipo();
		void setTipo(int tipo_da_conta_);
		int getLimite();
		void setLimite(int limite_);
		int getnumero();
		void setnumero(int numero_);
		int getsaldo();
		void setsaldo(int saldo_);
		void setextrato(int n, int a);
		void getextrato();
};
#endif