/*
 * ListaContabil.cpp
 *
 *  Created on: 25/09/2012
 *      Author: tiago
 */

#include "ListaContabil.h"
#include "string.h"

ListaContabil::ListaContabil() {
	// TODO Auto-generated constructor stub

}

ListaContabil::~ListaContabil() {
	// TODO Auto-generated destructor stub
}


int ListaContabil::adiciona(Lancamento dado){
	if(cheia())
		return LISTA_CHEIA;
	ultimo ++;
	lista[ultimo] = dado;
	return ultimo;
}

int ListaContabil::adicionaNoInicio(Lancamento dado){}


int ListaContabil::adicionaNaPosicao(Lancamento dado, int posicao){
	 if(cheia()){
		 return LISTA_CHEIA;
	 }
	 if(posicao < 0|| posicao > ultimo +1){
		 return ERRO_POSICAO;
	 }
	 ultimo++;
	 for(int i = ultimo; i > posicao; i--){
		 lista[i] = lista[i-1];
	 }
	 lista[posicao] = dado;
	 return posicao;
}
int ListaContabil::adicionaEmOrdem(Lancamento dado){}


Lancamento ListaContabil::retira(){}
Lancamento ListaContabil::retiraDoInicio(){}
Lancamento ListaContabil::retiraDaPosicao(int posicao){}
Lancamento ListaContabil::retiraEspecifico(Lancamento dado){}



bool ListaContabil::cheia(){
	return ultimo == MAXLISTA -1;
}
bool ListaContabil::vazia(){}
int ListaContabil::posicao(Lancamento dado){}
bool ListaContabil::contem(Lancamento um, Lancamento dois){}
bool ListaContabil::maior(Lancamento um, Lancamento dois){
	return strcmp(um.nome,dois.nome)>0;
}//PRA IMPLEMENTAR INSERIREMORDEM
bool ListaContabil::igual(Lancamento um, Lancamento dois){}
bool ListaContabil::menor(Lancamento um, Lancamento dois){}
