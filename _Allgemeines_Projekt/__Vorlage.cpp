/*===========================================================================================
TINF
NAME: ALEX HUBER	KLASSE: FTE1	DATUM:	

PROJEKT:	

===========================================================================================*/

#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES		// Reihenfolge des #define und #include wichtig, 
#include <math.h>				//sonst ist M_PI als "nichtdeklarierter Bezeichner" ausgewiesen!


//#define xHoch2(x) x*x
#define xHoch2(x) (x)*(x) // BESSERES Makros !!!

// Funktionen Deklaration
// Prototypen Deklaration, Strichpunkt ";" notwendig !!
										
double dividiere(int zaehler, int nenner); // Prototypen Deklaration, Strichpunkt ";" notwendig !!
										
// === Hauprogramm ===
void main(void)  
{
	//Lokale Variablen
	int end;	//Variable zum beenden des Programms
	
	do
	{
		// === AUFGABE 1 ===




		// === Abfrage ob das Programm beendet werden soll ===
		printf("\n\n\n*******************");
		printf("\n Soll das Programm beenden werden?\n  [ 1.] BEENDEN\n  [ 2.] Nicht beenden\n"); // Buchstaben dürfen nicht gedrückt werden!
		scanf_s("%i", &end);
		
	} while (end != 1);	// Solange die 1 nicht gedrückt wird, wiederholt sich die 'do'-Schleife
}

// === Funktionen ===