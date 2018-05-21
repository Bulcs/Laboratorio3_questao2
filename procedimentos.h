/**
* @file procedimentos.h
* @brief criaçao dos métodos dos parâmetros
* @since 12/05/2018
* @date 15/04/2018
*/

#ifndef PROCEDIMENTOS_H
#define PROCEDIMENTOS_H
#include "cabecalho.h"
#include "conta.h"

/** @brief chamada do método criarconta, recebendo como parâmetro um n e um ponteiro para a classe conta */
void criarconta(int n, Conta *conta);
/** @brief chamada do método deletarconta, recebendo como parâmetro um a e um ponteiro para a classe conta */
void deletarconta(int a, Conta *conta);
/** @brief chamada do método extrato, recebendo como parâmetro um n e um ponteiro para a classe conta */
void extrato(int n, Conta *conta);
/** @brief chamada do método saque, recebendo como parâmetro uma agencia, s e um ponteiro para a classe conta */
void saque(int agencia, int s, Conta *conta);
/** @brief chamada do método depositar, recebendo como parâmetro uma agencia, s e um ponteiro para a classe conta */
void depositar(int agencia, int s, Conta *conta);
/** @brief chamada do método emissaosaldo, recebendo como parâmetro uma agencia e um ponteiro para a classe conta */
void emissaosaldo(int agencia, Conta *conta);
/** @brief chamada do método transferencia, recebendo como parâmetro uma agencia, um ponteiro para a classe conta, agencia1 no qual representa a agencia da outra conta para transferencia e s  */
void transferencia(int agencia, Conta *conta,int agencia1, int s);

#endif