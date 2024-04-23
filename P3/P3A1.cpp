/******************************************************/
/* Autor: Kasim Mermer                                */
/* Datum: 09.10.2016                                  */
/* Projekt: P3A1                                      */
/* Beschreibung: Berechnung von Volum und Oberflaeche */
/******************************************************/

// Bibliothek hinzufügen
#include <stdio.h>

// Definieren
#define pi 3.141592					

/* Hauptfunktion */
int main(void) {

	// Initialisierungen
	float oberflaeche_kegel = 0, volumen_kegel = 0, durchmesser = 0, radius = 0;		
	int beenden = 0;

	/* WHILE: Führt Programm solange aus, bis man den Wert für die Variable*/ 
	/* "beenden" so eingibt, dass der Wert keine 0 ist.                    */
	while (beenden == 0) {
		// Textausgabe
		printf("Das Volumen und die Oberflaeche des Kugels berechnen. \nGeben sie nun das Durchmesser des Kugels ein:\t");
		// Eingabe von durchmesser für den float durchmesser
		scanf("%f", &durchmesser);		

		// berechnet den Radius
		radius = durchmesser / 2.0;		

		// berechnet das volumen für den Kugel und setzt es gleich
		volumen_kegel = (4.0 / 3.0) * pi* radius * radius * radius;	

		// das gleiche für die oberflache
		oberflaeche_kegel = 4 * pi	* radius * radius;	

		// gibt die werte aus
		printf("Das Volumen des Kegels ist: %.6f \nund die Oberflaeche ist: %.6f gross.\n\n", volumen_kegel, oberflaeche_kegel);	
		
		// Textausgabe
		printf("Wenn sie das Programm weiterhin nutzen moechten, geben sie eine \"0\" ein:\t");	
		
		// Für Variable "beenden" einen Wert zuweisen
		scanf("%i", &beenden);		
		
		// haelt das Programm vom beenden auf
		getchar();		
	}
	// rückgabewert
	return (1);		
}