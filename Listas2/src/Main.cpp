/*
 * Main.cpp
 *
 *  Created on: 25/09/2012
 *      Author: tiago
 */
#include<iostream>
#include<sstream>
#include<fstream>

#include "ListaContabil.h"

using namespace std;
ListaContabil debitos;
ListaContabil creditos;

void menuInterativo() {
	string menu;
	menu += "________________________________________________________\n";
	menu += "| Digite o código correspondente:                       |\n";
	menu += "| 1 - Selecionar Lista Créditos                         |\n";
	menu += "| 2 - Selecionar Lista Débitos                          |\n";
	menu += "| 3 - Lançar Transação                                  |\n";
	menu += "| 4 - Listar Transações                                 |\n";
	menu += "| 5 - Remover Transações                                |\n";
	menu += "| 6 - Mostrar Saldo ( total créditos - total débitos )  |\n";
	menu += "| 7 - Sair                                              |\n";
	menu += "|_______________________________________________________|\n";
	bool listaCreditosSelecionada = true;
	bool ativo = true;

	while (ativo) {
		cout<<menu<<endl;
		if(listaCreditosSelecionada){
			cout<<  "Lista atual :  CRÉDITOS " <<endl;
		} else{
			cout<<  "Lista atual :  DÉBITOS " <<endl;
		}
		int comando;
		cin >> comando;
		switch (comando) {
		case 1://Selecionar Lista Créditos
			listaCreditosSelecionada = true;
			break;
		case 2://Selecionar Lista Débitos
			listaCreditosSelecionada = false;
			break;
		case 3://Lançar Transação
			break;
		case 4://Listar Transações
			break;
		case 5://Remover Transações
			break;
		case 6://Mostrar Saldo ( total créditos - total débitos )
			break;
		case 7://Sair
			ativo = false;
			break;
		default:
			cout << "Código de comando inexistente!" << endl;
			break;
		}
	}

}
void lerCasoDeTeste(char* arquivo) {
}

int main(int argc, char** argv) {
	if (argc < 2) {
		menuInterativo();
	} else {
		lerCasoDeTeste(argv[1]);
	}
	return 0;
}




