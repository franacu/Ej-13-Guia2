
#include "helper.h"
int main()
{
    Nodo *p1=newNodo("Fran",20);
    Nodo *p2=newNodo("Franco",40);
    Nodo *p3=newNodo("Francin",10);
    Nodo *p4=newNodo("Luis",25);
    Nodo *p5=newNodo("Miguel",15);
    Lista *lista=newLista();
    agregarPersonas(p1,lista);
    agregarPersonas(p2,lista);
    agregarPersonas(p3,lista);
    agregarPersonas(p4,lista);
    agregarPersonas(p5,lista);

    imprimir(lista);
    promedio(lista);
    return 0;
}
