#include <iostream>

using namespace std;

class CriarConta
{
private:
	string nome;
	int agencia;
	int numero;
	float saldo;
	int status;
	int limite;
	int movimentacao;
public:
	string setNome(string nome);
	int setAgencia(int agencia);
	int setNumero(int numero);
	float setSaldo(float saldo);
	float getSaldo(void);
	int setStatus(int status);
	int getStatus(void);
	int setLimite(int limite);
	int setMovimentacao(int movimentacao);

};