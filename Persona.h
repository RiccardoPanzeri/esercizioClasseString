#include <string>
using namespace std;
class Persona
{private: //proprietà
	string nome;
	string cognome;
	int stipendio = 0;

public://metodi
	//costruttore 
	Persona(string nNome, string nCognome);
	
	//setter
	void setNome(string nuovoN);
	void setCognome(string nuovoC);
	bool setStipendio(string nuovoS); //il parametro sarà una stringa, in modo da poter prima effettuare un controllo prima di assegnare il nuovo valore alla proprietà stipendio. in questo modo, non lascio l'integer scoperto in caso di input errato;
	//getter
	string getNome();
	string getCognome();
	int getStipendio();

	//altri metodi
	void stampaInfo();

};

