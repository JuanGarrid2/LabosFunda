#include iostream
#include c.math
using namespace std;

void adivinaelnúmero( int num, int guardado)
int main (void)
{
int num;
int intentos=0;
int guardados=70;
int opción=0;

cout<<"Hola vamos a jugar!!! \n";
cout<<"intenta adivinar el número\n";
do{
    cout<<"1) Vamos a jugar\n";
    cout<<"2) Salir \n";
cin>>opción;

switch(opción){

case 1:
Intentos++;
if(intentos <=4){
    cout<<"ingresar un número";
    cin>>num;
    cout<<"Queda un intento menos\n";

    adivinaelnúmero(num, guardado);
}
break;
case 2:
break;

default:
cout<<"\n No ingresaste una opcion valida del sistema";

}
}while(opción!=2);

}
void adivinarelnumero(int num, int guardado){
    
    if(num<100 num<0){
        cout<<"intenta ingresar algun número del 1 al 100\n";
        else if(num<1 and num<guardado){
            cout<<"Estas alejado del número"
        }
    }
}