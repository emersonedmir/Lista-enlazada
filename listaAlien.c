#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definicion de las estructuras
typedef struct alien_t {
	char nombre[30];
	int id;
	char especie[30];
	struct planeta_t *planetas;
	struct idioma_t *idioma;
	struct alien_t *siguiente;

}aliens;
//definicion de planeta
typedef struct planeta_t {

	char nombre[30];
	int starwars_code;
	char agua;
	char oxigeno;
	struct planeta_t *siguiente;
}planeta;
//definicion de idioma
typedef struct idioma_t {
	char nombre[30];
	char tipo[30];
	int simbolos;
	struct idioma_t *siguiente;
	struct planeta_t *planetas;
}idioma;

void Agregar(){
	short seguir=0;
	aliens *nuevo = malloc(sizeof(aliens));
	
	if (nuevo==NULL)
	{
		printf("\nNo se pudo crear el objeto\n");
	}
	else
	{
		printf("\nMemoria asignada con éxito\n");
		printf("\nNombre: "); fflush(stdout);
		scanf("%s",&temp);
		strcpy ((*nuevo).nombre, temp);
		
		printf("\nId: "); fflush(stdout);
		scanf("%d",&aux2);
		(*nuevo).id=aux2;
		
		printf("\nEspecie: "); fflush(stdout);
		scanf("%s",&temp);
		strcpy ((*nuevo).especie, temp);
		
		while(seguir==0)
		{
		planeta *nuevoplt = malloc(sizeof(aliens));
	    //(*nuevo).planetas = nuevoplt;
		printf("\nPlaneta visitado: "); fflush(stdout);
		scanf("%s",&temp);
		strcpy ((*nuevoplt).nombre, temp);
		
		printf("\nStarwarsCode: "); fflush(stdout);
		scanf("%d",&aux2);
		(*nuevoplt).id=aux2;
		
		printf("\nTienen agua?: s/n"); fflush(stdout);
		scanf("%c",&aux);
		strcpy ((*nuevoplt).agua, aux);
		
		printf("\nTienen oxigeno?: s/n"); fflush(stdout);
		scanf("%c",&aux);
		strcpy ((*nuevoplt).oxigeno, aux);
		
		printf("\nDesea agregar otro planeta? s=0/n=1: "); fflush(stdout);
		scanf("%s",&temp);
		
		}
		(*nuevo).siguiente=NULL;
		
		//agregar otros elementos
		if(primero==NULL){  //significa que la lista está vacía
			primero=nuevo;
			ultimo=nuevo;
			
		}
		else{
			(*ultimo).siguiente = nuevo;
            ultimo = nuevo;
		}
		
		
	}
	}
	

	
void Imprimir(){
	  aliens *auxiliar; 
      int i;
 
      i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
            printf( "Nombre: %s, id: %d, Especie: %s, Planeta visitado: %s\n",
                    auxiliar->nombre,auxiliar->id,auxiliar->especie,(*auxiliar).planetas->nombre);
            auxiliar = auxiliar->siguiente;
            i++;
}	
}

void main()
{
	Agregar();
	Imprimir();
}




