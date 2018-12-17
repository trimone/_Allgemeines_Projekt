/*===========================================================================================
TINFkjhdjhdmsmnnsmns
NAME: ALEX HUBER	KLASSE: FTE1	DATUM: 26.01.18

PROJEKT: Intervallschachtelung am Beispiel Wurzel 2

===========================================================================================*/
//

//hey

//ho

 /// DAS ISZ EINE ÄNDERUNG
/// noch eine Änderung
 // !!
#include <stdio.h>
#include <conio.h>
#define _USE_MATH_DEFINES		// Reihenfolge des #define und #include wichtig, 
#include <math.h>				//sonst ist M_PI als "nichtdeklarierter Bezeichner" ausgewiesen!


//#define xHoch2(x) x*x
#define xHoch2(x) (x)*(x) // BESSERES Makros !!!

// Funktionen Deklaration
// Prototypen Deklaration, Strichpunkt ";" notwendig !!
										
double dividiere(int zaehler, int nenner); // Prototypen Deklaration, Strichpunkt ";" notwendig !!
int zweihoch( int n);	


// ===== Hauprogramm =====
void main(void)  
{
	//Lokale Variablen
	int end;	//Variable zum beenden des Programms
	int n,
		erg;

	// \a im 'printf' gibt ein Audiosignal aus (alarm) 
	printf("\n*******************\a");
	printf("\n\n Rekusive Funktionen\a");
	printf("\n 2^n");
	
	do
	{
		// =====  =====
		
		printf("\n n eingeben: ");
		scanf_s("%i", &n);

		
			erg= zweihoch(n);

			printf("\n 2 hoch %i ist %i", n, erg); // %.xlf Anzahl an Kommastellen
		
		

		// ========== Abfrage ob das Programm beendet werden soll ==================
		printf("\n\n\n*******************");
		printf("\n Soll das Programm beenden werden?\n  [ 1.] BEENDEN\n  [ 2.] Nicht beenden\n"); // Buchstaben dürfen nicht gedrückt werden!
		scanf_s("%i", &end);
		
	} while (end != 1);	// Solange die 1 nicht gedrückt wird, wiederholt sich die 'do'-Schleife
}

// ===== Funktionen =====

int zweihoch( int n)	
{
	int erg = 1;
	
	if (n > 0)	// Es wird eine Bedingung zum Beenden benötigt !! // sonst Stack overflow
	{
		erg = zweihoch(n-1) * 2;  // Funktion ruft sich selbst auf
	}
	
	return erg;
}
