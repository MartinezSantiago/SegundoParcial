#ifndef JUGADORDEFUTBOL_H_INCLUDED
#define JUGADORDEFUTBOL_H_INCLUDED
struct jugadorDeFutbolStruct;
typedef struct jugadorDeFutbolStruct *jugadorDeFutbol;
jugadorDeFutbol CargarJugadorPorTeclado();

jugadorDeFutbol CargarJugador(char nombre[20],int cantidadDeGoles,int edad,float habilidad);
char * GetNombre(jugadorDeFutbol j);
int GetCantidadDeGoles(jugadorDeFutbol j);
void OrdenarJugadoresPorValor(jugadorDeFutbol arreglo[],int tam);
void MostrarJugadores(jugadorDeFutbol arreglo[],int tam);
int GetEdad(jugadorDeFutbol j);
void Destructor(jugadorDeFutbol j);
void SetValor(jugadorDeFutbol j);
float Valor(int edad,int Cantidad,float hab);
void SetHabilidad(jugadorDeFutbol j,float habilidadnueva);
float GetHabilidad(jugadorDeFutbol j);
int GetValor(jugadorDeFutbol j);
void CargarEnTxt(jugadorDeFutbol arreglo[],int tam);

#endif // JUGADORDEFUTBOL_H_INCLUDED
