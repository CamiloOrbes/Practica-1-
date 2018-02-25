#include <iostream>
using namespace std;

int main () {
    char c;                             //Tipo char para utilizar la tabla ACSII
    cout<<"Ingrese una letra: "<<endl;
    cin >> c;
        if(c >= 'a' and c<='z') {       //Pregunta si la variable esta entre el valor 97 y 122 de la tabla ACSII(que son las minusculas)
            c -= 32;                    //Si es verdad le resta 32 que serian el numero de posiciones para llegar a la mayuscula en tabla ACSII
            cout <<"Letra convertida: "<< c<<endl; }
        else{
            cout <<"Letra convertida: "<<c<<endl;
        }


}
