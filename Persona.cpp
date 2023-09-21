#include "Persona.h"
#include <cctype>
#include <iostream>
#include <cstdlib>



//costruttore
Persona::Persona(string nNome, string nCognome) {
	nome = nNome;
	cognome = nCognome;
}

//metodi setter
void Persona::setNome(string nuovoN) {
	nome = nuovoN;

}

void Persona::setCognome(string nuovoC) {
	cognome = nuovoC;
}

bool Persona::setStipendio(string nuovoS) { //utilizzo un iteratore per effettuare il controllo del parametro, assicurandomi che sia effettivamente un numero intero; 
	bool inputCorretto = true;
	for (string::iterator iteratore = nuovoS.begin(); iteratore != nuovoS.end(); iteratore++) { //il ciclo for dichiara l'iteratore e gli assegna l'indirizzo del primo carattere della stringa; l'iterazione continuerà fino a quando l'iteratore non avrà come valore l'indirizzo dell'utlimo carattere della stringa;
		if (!isdigit(*iteratore)) { // siccome l'iteratore contiene di fatto un'indirizzo di memoria, per accedere al contenuto dell'indirizzo a cui punta utilizzerò l'asterisco;
			inputCorretto = false; // utilizzando la funzione isdigit() della libreria <cctype>>, mi assicuro che ogni carattere della stringa, il cui valore viene man mano puntato dall'iteratore, sia effettivamente un numero; in caso contrario, cambio valore lla variabile booleana;
		}
	}
	if (inputCorretto) {
		stipendio = stoi(nuovoS); //se l'input è composto da soli numeri, allora utilizzo la funzione "stoi" della libreria <string> per convertirlo in numero intero; 
		return true;
	}
	else {
		
		return false; //altrimenti, il return sarà false;
	}
	
}
//metodi getter
string Persona::getNome() {
	return nome;
}

string Persona::getCognome() {
	return cognome;
}

int Persona::getStipendio() {
	return stipendio;
}

//altri metodi
void Persona::stampaInfo() {

	cout << endl <<  "Nome: " << nome << endl;
	cout<< "Cognome: "<< cognome<<endl;
	cout << "Stipendio: " << stipendio << endl << endl;
}
