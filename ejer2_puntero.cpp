#include <iostream>
using namespace std;

int main(int argc,char *[])
{
    int e;
    int *puntero =&e;
    cout <<"Ingrese su edad: ";
    cin>> *puntero;

    if (*puntero>17)
    {
        cout<<"Eres mayor de edad"<<endl;
        cout <<"Tu edad es "<<e<< endl;
        cout<<"El espacio de puntero es: " <<&puntero<<endl;
    }
    else 
    {
        cout<<"Eres menor de edad"<<endl;
        cout <<"Tu edad es "<<e<< endl;
        cout<<"El espacio de puntero es: "<<&puntero<<endl;
    }
    return 0;
}