#include <iostream>

using namespace std;

int main()
{
    int numero,contador;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;
    contador =1;
    while((numero/10)>0){   //La operacion /10 le va quitando de a 1 cifra
        numero = numero/10;  //cuando la operacion de un numero menor a 0 dejara entrar en el ciclo
        contador++;         //La variable contador va sumando de a 1 si hay una cifra

    }


    cout << "La cantidad de cifras del numero es: " <<contador<< endl;
    return 0;
}
