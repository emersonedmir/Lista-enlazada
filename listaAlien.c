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

typedef struct planeta_t {

	char nombre[30];
	int starwars_code;
	char agua;
	char oxigeno;
	struct planeta_t *siguiente;
}planeta;

typedef struct idioma_t {
	char nombre[30];
	char tipo[30];
	int simbolos;
	struct idioma_t *siguiente;
	struct planeta_t *planetas;
}idioma;


int main()
{
	
	

	aliens *nuevo = malloc(sizeof(aliens));
    planeta *nuevoplt = malloc(sizeof(planeta));
    idioma *nuevoidm = malloc(sizeof(idioma));
    
	strcpy(nuevo->nombre,"Alf");
	nuevo->id=1;
	strcpy(nuevo->especie,"Melmak");
	nuevo->siguiente=NULL;
	
	strcpy(nuevoplt->nombre,"La Tierra");
	nuevoplt->starwars_code=1;
	nuevoplt->agua='s';
	nuevoplt->oxigeno='s';
	nuevoplt->siguiente=NULL;
	nuevo->planetas=nuevoplt;
	
	strcpy(nuevoidm->nombre,"Ingles");
	strcpy(nuevoidm->tipo,"fonetico");
	nuevoidm->simbolos=25;
	nuevoidm->siguiente=NULL;
	
	//imprimiendo datos
	printf("Alien : \n");
	printf("\nNombre: %s\n",nuevo->nombre);
	printf("\nEspecie: %s\n",nuevo->especie);
	printf("\nId: %d\n",nuevo->id);
	printf("\nplaneta visitado\n");
	printf("\nNombre: %s\n",nuevoplt->nombre);
	printf("\nStarWars Code: %d\n",nuevoplt->starwars_code);
	printf("\nExiste agua?: %c\n",nuevoplt->agua);
	printf("\nExiste oxigeno?: %c\n",nuevoplt->oxigeno);
	printf("\nIdiomas que domina:\n");
	printf("\nNombre: %s\n",nuevoidm->nombre);
	printf("\nTipo: %s\n",nuevoidm->tipo);
	printf("\nCantidad de caracteres: %d\n",nuevoidm->simbolos);
	return 1;
}



