//
// Created by Fran on 21/05/2024.
//
#ifndef EJ13_GUIA2_HELPER_H
#define EJ13_GUIA2_HELPER_H
typedef struct nodo
{
    char *persona[50];
    int edad;
    struct nodo *sig;
}Nodo;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(char *persona,int edad);
Lista *newLista();
void agregarPersonas(Nodo *personaAgregada,Lista *lista);
void imprimir(Lista *lista);
void promedio(Lista *lista);

#endif //EJ13_GUIA2_HELPER_H
