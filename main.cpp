#include "Persona.h"
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	bool ctrl; //varabile booleana che utilizzerò per il controllo dell'input per lo stipendio;
	//variabile che conterrà l' input che poi utilizzerò come parametri per il metodo setter relativo allo stipendio;
	string nome;
	string cognome;
	string iStipendio;
	const int dim = 2; //dimensione dell'array di oggetti;

	
	//dichiaro le istanze della classe usando il metodo costruttore:
	Persona rossi("Mario", "Rossi");
	Persona verdi("Luigi", "Verdi");
	//creo un array di oggetti:
	Persona azienda[dim] = { rossi, verdi };

	//uso il metodo setter setStipendio, dotati di controllo dell'input, per verificare che non vengano inseriti caratteri al momento dell'input dello stipendio;
	//utilizzo un ciclo postcondizionato con condizione di usicta il return "true" del setter: in questo modo, fino a che l'input non sarà valido, verrà chiesto l'input all'utente;
	for(int i = 0; i < dim; i++)
		do {
			cout << endl << "Inserisci stipendio per l'impiegato " << azienda[i].getNome() << " " << azienda[i].getCognome() << ": " << endl;
			getline(cin, iStipendio); // utilizzo la funzione "getline" per prelevare l'input dell'uente e inserirlo nella stringa di controllo;
			ctrl = azienda[i].setStipendio(iStipendio); // assegnop il return del metodo setter a ctrl, per poter verificare successivamente le condizioni di uscita;
			if (!ctrl) {
				cout << "Input errato!" << endl << endl; //se la variabile booleana di cotnrollo restituirà false, stamperò il messaggio di errore;
			}
		} while (!ctrl);//il ciclo continuerà finchè il setter non restituirà "true", ovvero fino a quando il controllo dell'input avrà esito positivo e alla proprietà stipendio verrà effettivamente assegnato un valore;


		//Ora che ogni impiegato ha un valore numerico assegnato alla proprietà "stipendio", utilizzo il metodo che  appositamente creato per visualizzare tutti i dati di ogni impiegato;
		cout << endl << "Ecco i dati di ogni impiegato dell'azienda:" << endl;
		for (int i = 0; i < dim; i++) {
			azienda[i].stampaInfo(); // utilizzo il metodo stampaInfo() della classe Persona; avrei anche potuto utilizzare i metodi getter singolarmente, volendo.
		}
	 


	
	
	
	
	
	
	return 0;
}