#include <iostream>

using namespace std;

int main()
{
    int mes,dia,cm=0,cd=0,ce=0,bm,bd,be;

    cout << "Ingrese un mes en digitos: " << endl;  //cm,cd,ce son banderas de cierre de ciclos
    cin>>mes;
    cout<< "Ingrese un dia de ese mes: " << endl;
    cin>>dia;
    while(cm==0){       //ciclo que confirma el mes

        cm=1;
        if(mes<=12){            //bm,bd,be confirma que esten bien los datos
            }
            if(mes>0){
                bm=1;
            }
        else {
            bm=0;
            }
        if(dia<=31){
            }
            if(dia>0){
                bd=1;
            }
        else{
            bd=0;
            }
        }
    while(cd==0){                    //ciclo que confirma el dia
        cd=1;
        if(mes==2){
            if(dia<=29){
                if(dia<=28){
                    be=0;
                    }
                else{
                     be=1;
                    }
                }
            else{
                bd=0;
            }
            }
        }
    while(ce==0){                 //ciclo de impresion
        ce=1;
        if(bm==1){
            if(dia==1){
                }
                if(be==1){
                    cout<<mes<<"/"<<dia<<" Es una fecha valida si es bisiesto"<<endl;

            }
                else
                    cout<<mes<<"/"<<dia<<" Es una fecha valida "<<endl;
            }
        else{
            cout<<mes<<"/"<<dia<<" Es una fecha no valida"<<endl;


     }
    }




    return 0;
}
