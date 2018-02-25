#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int numero,ban=0; // ban funciona como una varable bandera que sera 0 si no es el numero y 1 si es el numero
    string a;
    srand (time(NULL));
    numero = rand() %100; //Genera un numero aleatorio que sera mostrado al usuario
    cout << "Este es su numero?  " <<numero<< endl;
    while(ban==0){

        cout<<"Si es su numero ingrese =, si no es su numero ingrese < si es menor o > si es mayor su numero "<<a<<endl;
        cin>>a;
        if (a==">"){  //si el numero del usuario es mayor se le sumara 1 numero sucesivamente hasta hallarlo
            numero+=1;
            }
        if (a=="<"){  //si el numero del usuario es menor se le restara 1 numero sucesivamente hasta hallarlo
            numero-=1;
        }
        if (a=="="){
            ban=1;
        }

    cout<<"Su numero era: "<<numero<<endl;

    }





    return 0;

}
