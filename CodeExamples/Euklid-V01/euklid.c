#include <stdio.h>
#define OK 0
#define ERROR 1

int main (void) {
    /* Lies zwei Ganzahlen >= 0 ein und weise sie x und y zu ;
     * Das koennen wir noch nicht.
     * Daher werden x und y im Code mit Zahlen belegt.
     */
    int x = 24;
    int y = 9;
    int rest = 0;

while (x%y != 0) {
    rest = x%y;
    x = y;
    y = rest;
  
    }

    /* Ausgabe von y; */
    printf ("Der groesste gemeinsame Teiler ist: %d\n", y);
    return OK;
}
