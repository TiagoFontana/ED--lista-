/*
 * ListaContabil.h
 *
 *  Created on: 25/09/2012
 *      Author: tiago
 */

#ifndef LISTACONTABIL_H_
#define LISTACONTABIL_H_
#include "Lancamento.h"

#define MAXLISTA 100
#define LISTA_CHEIA -1
#define LISTA_VAZIA -2
#define ERRO_POSICAO -3


class ListaContabil {
public:
	ListaContabil();
	virtual ~ListaContabil();
	int adiciona(Lancamento dado);//v
	int adicionaNoInicio(Lancamento dado);
	int adicionaNaPosicao(Lancamento dado, int posicao);//v
	int adicionaEmOrdem(Lancamento dado);

	Lancamento retira();
	Lancamento retiraDoInicio();
	Lancamento retiraDaPosicao(int posicao);
	Lancamento retiraEspecifico(Lancamento dado);

	bool cheia();//v
	bool vazia();
	int posicao(Lancamento dado);
	bool contem(Lancamento um, Lancamento dois);
	bool maior(Lancamento um, Lancamento dois);//v
	bool igual(Lancamento um, Lancamento dois);
	bool menor(Lancamento um, Lancamento dois);
private:
	Lancamento lista[MAXLISTA];
	int ultimo;
};

#endif /* LISTACONTABIL_H_ */
