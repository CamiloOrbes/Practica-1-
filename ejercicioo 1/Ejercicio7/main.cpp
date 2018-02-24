#include <iostream>

using namespace std;

int main()
{
    float a,c,b;
    cout << "Ingrese un numero:" << endl;
    cin>>a;

    while(b<=a){ //Un ciclo en donde se guarda la sumatoria en la variable c y se le va sumando 1 a la variable b hasta que sea igual al numero ingresado.


         c = b+c;
         b= b+1;

    }

    cout<<"La sumatoria es igual a: "<<c<<endl;



}




