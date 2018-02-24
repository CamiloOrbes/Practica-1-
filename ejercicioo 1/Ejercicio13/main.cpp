#include <iostream>

using namespace std;

int main()
{
    int a,c;
    cout<<"Ingrese un numero: "<<endl;
    cin>>a;
    int b=1;
    cout << "Los divisisores son: " << endl;
    while(b<=a){
        c=a%b;
        if(c==0){//si el residuo de a y b es igual a 0 significara que b es un divisor
            cout << b << endl;
        }
        b=b+1;//variable contador que sirve para ir probando cada uno de los divisiores

    }

    return 0;
}
