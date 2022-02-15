#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "jugadordefutbol.h"

int main()
{
    ///NOMBRE, GOLES, EDAD, HABILIDAD
    jugadorDeFutbol j1=CargarJugador("Lionel Messi",753,34,2.66);
    jugadorDeFutbol j2=CargarJugador("Kylian Mbappe",12,24,9.79);
    jugadorDeFutbol j3=CargarJugador("Neymar Jr",9,28,10);
    jugadorDeFutbol j4=CargarJugador("Martin Palermo",78,13,8.1);

    jugadorDeFutbol plantel[4]={j1,j2,j3,j4};
 MostrarJugadores(plantel,4);
    OrdenarJugadoresPorValor(plantel,4);
    SetHabilidad(j1,9.9);
    MostrarJugadores(plantel,4);
    CargarEnTxt(plantel,4);





    return 0;
}
