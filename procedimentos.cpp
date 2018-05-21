/**
* @file procedimentos.cpp
* @brief criaçao dos procedimentos
* @since 12/05/2018
* @date 15/04/2018
*/
#include "cabecalho.h"
#include "conta.h"
#include <iostream>

using namespace std;
/**@brief atribuição do método criarconta */
void criarconta(int n, Conta *conta){
/** 
	@brief criação dos parâmetros int
	@param limite que representa o limite da conta
	@param tipo que representa o tipo da conta(conta corrente ou poupança)
*/
	int limite,tipo;
	cout << "Qual o tipo da conta (1 - Conta corrente/2 - Conta poupança)" <<endl;
	cin >> tipo;
/** @brief Criação de uma condicional, caso tipo seja igual a 1, cria-se a conta corrente */
	if(tipo == 1){
	cout << "Qual o limite da conta(1 - Saques ilimitados/2 - Saque de até 1000R$)" << endl;
	cin >> limite;
	/** @brief na conta determinada por n, chama o setagencia, que recebe o parâmetro n */
		conta[n].setagencia(n);
		cout <<"\nSua conta foi criada:"<<endl;
		cout <<"Agência: "<<n<<endl;
/** @brief na conta determinada por n, chama o setnumero, que recebe o parâmetro 1000-n */
		conta[n].setnumero(1000-n);
		cout <<"Número da conta: "<<1000-n<<endl;
/** @brief na conta determinada por n, chama o setsaldo, que recebe o parâmetro 0 */
		conta[n].setsaldo(0);
		cout <<"Seu saldo atual: "<<0<<endl;
/** @brief na conta determinada por n, chama o setLimite, que recebe o parâmetro limite */
		conta[n].setLimite(limite);
		cout << "Seu limite é do tipo " << limite << endl;
/** @brief na conta determinada por n, chama o setTipo, que recebe o parâmetro tipo */
		conta[n].setTipo(tipo);
		cout << "Seu tipo de conta é Corrente" <<endl;
	}

	else{
/** @brief na conta determinada por n, chama o setagencia, que recebe o parâmetro n */
		conta[n].setagencia(n);
		cout <<"\nSua conta foi criada:"<<endl;
		cout <<"Agência: "<<n<<endl;
/** @brief na conta determinada por n, chama o setnumero, que recebe o parâmetro 1000-n */
		conta[n].setnumero(1000-n);
		cout <<"Número da conta: "<<1000-n<<endl;
/** @brief na conta determinada por n, chama o setsaldo, que recebe o parâmetro 0 */
		conta[n].setsaldo(0);
		cout <<"Seu saldo atual: "<<0<<endl;
		conta[n].setTipo(tipo);
/** @brief na conta determinada por n, chama o setTipo, que recebe o parâmetro tipo */
		cout << "Seu tipo de conta é poupança" <<endl;
}
}
/** @brief atribuição do método deletarconta */
void deletarconta(int a,Conta *conta){
/** @brief atribuição a agencia, numero da conta e saldo para -1 */
	conta[a].setagencia(-1);
	conta[a].setnumero(-1);
	conta[a].setsaldo(-1);
}
/**@brief atribuição do método extrato */
void extrato(int n, Conta *conta){
/** @brief se a conta tiver sido deletada informar */
	if(conta[n].getagencia() < 0){
		cout << "A conta não existe mais!"<< endl;
	}
	conta[n].getextrato();
}
/**@brief atribuição do método saque */
void saque(int agencia, int s, Conta *conta){
/**
	@brief int
	@param novo
 */
	if(conta[agencia].getTipo() == 1){
	if(conta[agencia].getLimite() == 2){
		int novo;
/** @brief novo recebe conta, que chama o getsaldo - s(saque) */
		if(s > 1000){
			cout <<"Saque não permitido"<<endl;
		}
		else{
		novo=conta[agencia].getsaldo()-s;
		if(novo<0){
			cout <<"Sem dinheiro o suficiente"<<endl;
		}else{
/** @brief chama a conta, que chama o setsaldo com o parâmetro novo, para substituir o saldo anterior */
			conta[agencia].setsaldo(novo);
			cout <<"Saque efetuado, seu novo saldo: "<<novo<<"RS"<<endl;
		}
/** @brief chama a conta, que chama o setextrato  */
		conta[agencia].setextrato(3,s);
	}
}
	else{
/** @brief se a conta tiver sido deletada informar */
	if(conta[agencia].getagencia() < 0){
		cout << "A conta não existe mais!"<< endl;
	}
	else{
	int novo;
/** @brief novo recebe conta, que chama o getsaldo - s(saque) */
		novo=conta[agencia].getsaldo()-s;
		if(novo<0){
			cout <<"Sem dinheiro o suficiente"<<endl;
		}else{
/** @brief chama a conta, que chama o setsaldo com o parâmetro novo, para substituir o saldo anterior */
			conta[agencia].setsaldo(novo);
			cout <<"Saque efetuado, seu novo saldo: "<<novo<<"RS"<<endl;
		}
/** @brief chama a conta, que chama o setextrato  */
		conta[agencia].setextrato(3,s);
		}
	}
}
else{
	int novo;
/** @brief novo recebe conta, que chama o getsaldo - s(saque) */
		novo=conta[agencia].getsaldo()-s;
		if(novo<0){
			cout <<"Sem dinheiro o suficiente"<<endl;
		}else{
/** @brief chama a conta, que chama o setsaldo com o parâmetro novo, para substituir o saldo anterior */
			conta[agencia].setsaldo(novo);
			cout <<"Saque efetuado, seu novo saldo: "<<novo<<"RS"<<endl;
		}
/** @brief chama a conta, que chama o setextrato  */
		conta[agencia].setextrato(3,s);
}
}

/**@brief atribuição do método depositar */
void depositar(int agencia, int s, Conta *conta){
	int novo;
/** @brief se a conta tiver sido deletada informar */
	if(conta[agencia].getagencia() < 0){
		cout << "A conta não existe mais!"<< endl;
	}
	else{
/** @brief novo recebe conta, que chama o getsaldo + s(saque) */
		novo=conta[agencia].getsaldo()+s;
		if(s<0){
			cout <<"Não foi possível, valor digitado negativo"<<endl;
		}else{
/** @brief chama a conta, que chama o setsaldo com o parâmetro novo, para substituir o saldo anterior */
			conta[agencia].setsaldo(novo);
			cout <<"Depósito realizado, seu novo saldo: "<<novo<<"RS"<<endl;
		}
/** @brief chama a conta, que chama o setextrato  */
		conta[agencia].setextrato(4,s);
		}
}
/**@brief atribuição do método emissaosaldo */
void emissaosaldo(int agencia, Conta *conta){
/** @brief se a conta tiver sido deletada informar */
	if(conta[agencia].getagencia() < 0){
		cout << "A conta não existe mais!"<< endl;
	}
	else{
/** @brief Imprime um cout informando o saldo da conta  */
	cout <<"Seu saldo atual: "<<conta[agencia].getsaldo()<<"RS"<<endl;
	}
}
/**@brief atribuição do método transferencia */
void transferencia(int agencia, Conta *conta,int agencia1, int s){
/**
	@brief int
	@param novo
 */
/** @brief se a conta tiver sido deletada informar */
	if(conta[agencia].getagencia() < 0 || conta[agencia1].getagencia() < 0){
		cout << "A conta não existe mais!"<< endl;
	}
	else{
	int saldo;
/** @brief novo recebe conta, que chama o getsaldo - s(saque) */
		saldo=conta[agencia].getsaldo()-s;
/** @brief conta chama o método setsaldo com os parâmetros do getsaldo */
		conta[agencia1].setsaldo(conta[agencia1].getsaldo()+s);
		if(saldo<0){
			cout <<"Não há a quantia digitada"<<endl;
		}else{
/** @brief chama a conta, e chama o método setsaldo */
			conta[agencia].setsaldo(saldo);
			cout <<"Transferência realizada, seu novo saldo é: "<<saldo<<"RS"<<endl;
		}
/** @brief chama a conta, que chama o setextrato */
		conta[agencia].setextrato(5,s);
		}
}