//
// Created by Fran on 21/05/2024.
//
#include "stdlib.h"
#include "helper.h"
#include "stdio.h"
#include "string.h"
Nodo *newNodo(char *persona,int edad)
{
    Nodo *aux=malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        return NULL;
    }else
        {
            strcpy(aux->persona,persona);
            aux->edad=edad;
            aux->sig=NULL;
            return aux;
        }
}
Lista *newLista()
{
    Lista *aux=malloc(sizeof(Lista));
    if(aux==NULL)
    {
        return NULL;
    }else
    {
        aux->cab=NULL;
        return aux;
    }
}
void agregarPersonas(Nodo *personaAgregada,Lista *lista)
{
    if(lista->cab==NULL)
    {
        lista->cab=personaAgregada;
    }else
        {
            Nodo *aux=lista->cab;
            while (aux->sig!=NULL)
            {
                aux=aux->sig;
            }
            aux->sig=personaAgregada;
        }
}
void imprimir(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("Lista:\n");
    while(aux!=NULL)
    {
        printf("Persona:%s Edad:%d\n",aux->persona,aux->edad);
        aux=aux->sig;
    }
}
void promedio(Lista *lista)
{
    int total=0,cont=0;
    float promedio=0;
    Nodo *aux=lista->cab;
    while(aux!=NULL)
    {
        total=total + aux->edad;
        cont++;
        aux=aux->sig;
    }
    promedio=total/cont;
    printf("PROMEDIO: %2.f",promedio);
}