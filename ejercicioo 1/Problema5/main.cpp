#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Ingrese un numero impar : ";
    cin >>n;


    for (int i=0 ; i<=(n/2) ; i++){            //En este pedazo declara el numero de filas //en este ciclo se hace la parte de arriba del

        for (int j=0 ; j<=n ;j++){              //rombo

            if (j<=((n/2)-i) || j>(n/2)+1+i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    for (int i =((n/2)-1); i>=0; i--){          //en este se hace la parte de abajo

        for (int j=n ; j>=0 ;j--){

            if (j>((n/2)+i) || j<(n/2)-i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
