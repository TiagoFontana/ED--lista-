/*
 * Lancamento.h
 *
 *  Created on: 25/09/2012
 *      Author: tiago
 */

#ifndef LANCAMENTO_H_
#define LANCAMENTO_H_

#define MAXNOME 40

class Lancamento {
public:
	Lancamento();
	virtual ~Lancamento();
	char nome[MAXNOME];
	int valor;
};

#endif /* LANCAMENTO_H_ */
