#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Ingrese un numero"<<endl;
    cin>>a;

    c=a;
    d=false;
    while(d==false){
        cout<<"Ingrese otro numero"<<endl;
        cin>>b;
        if(b==0){
            d=true;
            cout<<"El mayor numero es: "<<c<<endl;

        }
        if(c<b){
            c=b;
        }
        if(b<c){
            c=c+0;
            }

        }

    return 0;
}
