#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int *apuntador =&x;//Creamos un apuntador a la memoria x(apuntador puede tener cualquier nombre)
    cout <<"Ingrese un numero entero\n";
    cin >>*apuntador;//Almacenamos en la memoria el dato

    delete[] apuntador;//Despues de operar con punteros es necesario liberar memoria
    apuntador =NULL;

    cout <<"Usted ingreso el numero: "<<x<<endl;
    cout<<"El espacio de memoria de la variable es: "<<&apuntador<<endl;
    return 0;

}