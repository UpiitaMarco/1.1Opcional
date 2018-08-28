#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int v,i;
float r;
printf("Instituto Politecnico Nacional \nUnidad Profesional Interdisciplinaria en Ingenieria y Tecnologias Avanzadas \n\nIntroduccion a la Programacion \nPractica 1.1 Opcional: Programa que calcule la resistencia de cierto voltaje \ny cierta corriente (R=V/I).");  
printf("\n\nIngrese el valor del Voltaje:");
scanf("%d",&v);
printf("Ingrese el valor de la Corriente:");
scanf("%d",&i);
r=v/i;
printf("El valor de la Resistencia es de %f Ohms.\n",r);
system("PAUSE");	
return 0;
}
