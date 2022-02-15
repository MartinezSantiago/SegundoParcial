#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "jugadordefutbol.h"


struct jugadorDeFutbolStruct{
char nombre[20];
int cantidadDeGoles;
int edad;
float habilidad;
float valor;

};

jugadorDeFutbol CargarJugadorPorTeclado(){
char n[20]=" ";
int cantGoles;
int e;
float hab;

printf("\nIngrese el nombre del jugador\n");
fflush(stdin);
gets(n);
printf("\nIngrese la cantidad de goles del jugador\n");
scanf("%d",&cantGoles);
printf("\nIngrese la edad del jugador\n");
scanf("%d",&e);
do{printf("\nIngrese la habilidad del jugador\n");
scanf("%f",&hab);}while(hab<=0);



return CargarJugador(n, cantGoles,e,hab);


}


jugadorDeFutbol CargarJugador(char n[20],int cantDeGoles,int eda,float hab){

jugadorDeFutbol jugador=malloc(sizeof(struct jugadorDeFutbolStruct));

strcpy(jugador->nombre,n);
jugador->cantidadDeGoles=cantDeGoles;
jugador->edad=eda;
 jugador->habilidad=hab;
if(hab<=0){
    printf("\n ERROR: Habilidad debe ser mayor a 0\n. Ingrese la habilidad correctamente por teclado\n");
    scanf("%f",&hab);
    jugador->habilidad=hab;


}

SetValor(jugador);
//jugador->valor=Valor(eda,cantDeGoles,hab);
return jugador;


}
float Valor(int edad,int Cantidad,float hab){
return 5000000*hab*(25/(float)edad)+1500*Cantidad;
}

void OrdenarJugadoresPorValor(jugadorDeFutbol arreglo[],int tam){jugadorDeFutbol aux;
for(int i=0;i<tam;i++){
    for(int j=0;j<tam-1;j++){
            if(arreglo[j]->valor<arreglo[j+1]->valor){
                aux=arreglo[j+1];
                arreglo[j+1]=arreglo[j];
                arreglo[j]=aux;
            }


    }


}


}
void MostrarJugadores(jugadorDeFutbol arreglo[],int tam){
for(int i=0;i<tam;i++){
    printf("\n-------JUGADOR DE FUTBOL-------\n");
    printf("\nNombre: %s\nCantidad De Goles: %d\nEdad: %d\nHabilidad: %f\nValor: %f\n",arreglo[i]->nombre,arreglo[i]->cantidadDeGoles,arreglo[i]->edad,arreglo[i]->habilidad,arreglo[i]->valor);

}

}
void CargarEnTxt(jugadorDeFutbol arreglo[],int tam){
FILE* puntero;
puntero=fopen("archivo.txt","a");
for(int i=0;i<tam;i++){
    if(arreglo[i]->valor>1000000){
        fprintf(puntero,"Nombre: %s\tCantidad De Goles: %d\tEdad: %d\tHabilidad: %f\tValor: %f\n",arreglo[i]->nombre,arreglo[i]->cantidadDeGoles,arreglo[i]->edad,arreglo[i]->habilidad,arreglo[i]->valor);
    }

    fclose(puntero);



    }



}




void Destructor(jugadorDeFutbol j){
free(j);
}

char * GetNombre(jugadorDeFutbol j){
return j->nombre;

}
int GetCantidadDeGoles(jugadorDeFutbol j){
return j->cantidadDeGoles;

}
int GetEdad(jugadorDeFutbol j){
return j->edad;

}
float GetHabilidad(jugadorDeFutbol j){
return j->habilidad;

}
int GetValor(jugadorDeFutbol j){
return j->valor;

}

void SetValor(jugadorDeFutbol j){
j->valor=5000000*j->habilidad*(25/(float)j->edad)+1500*j->cantidadDeGoles;
}

void SetHabilidad(jugadorDeFutbol j,float habilidadnueva){
j->habilidad=habilidadnueva;
SetValor(j);

}
