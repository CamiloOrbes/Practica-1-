#include <iostream>

using namespace std;

int main()
{
    int numero;


    cout << "Escriba un numero" << endl;
    cin>> numero;

    cout<<"El numero que escribio es "<< numero<<endl;

    if(numero%2==0){
        cout<<"El numero es par"<<endl;

    }
    else{
        cout<<"El numero es impar"<<endl;
    }
    return 0;
}
