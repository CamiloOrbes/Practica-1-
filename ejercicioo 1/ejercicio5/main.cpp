#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cout<<"Ingrese un numero"<<endl;
    cin>>a;
    cout << "Ingrese otro numero" << endl;
    cin>>b;
    float num=a/b;
    if( (num + 0.5) >= (int(num) + 1) )
    cout << "El resultado redoneado es:  " << int(num)+1<<endl;
    else
    cout <<"El resultado redondeado es:  " << int(num)<<endl;


    return 0;
}
