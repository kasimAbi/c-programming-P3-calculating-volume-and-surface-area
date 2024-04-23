/*********************/
/* AUtor: Kasim Mermer */
/* Datum : 09.10.2016 */
/* Projekt: P3A1 */
/* Beschreibung: Berechnung von Volum und Oberflaeche */
/***********************/

#include <stdio.h>
#define pi 3.141592					// Definieren
/* Hauptfunktion */
int main(void) {
	float oberflaeche_kegel = 0;		// Initialisierungen
	float volumen_kegel = 0;
	float durchmesser = 0;
	float radius = 0;


	while (1) {
		printf("Das Volumen und die Oberflaeche des Kugels berechnen. \nGeben sie nun das Durchmesser des Kugels ein:\t");
		scanf_s("%f",&durchmesser);
		radius = durchmesser / 2.0;
		volumen_kegel = (4.0 / 3.0) * pi* radius * radius * radius;
		oberflaeche_kegel = 4 * pi	* radius * radius;
		printf("Das Volumen des Kegels ist: %.6f \nund die Oberflaeche ist: %.6f gross.\n\n", volumen_kegel, oberflaeche_kegel);

	}
	getchar();
	return (1);
}