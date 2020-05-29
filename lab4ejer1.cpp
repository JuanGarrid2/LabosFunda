#include "iostream"
using namespace std;
int main(){

    int a, b;

    cout << "Digite dos numeros"<< endl;
    cin >> a >> b;

    if((a % b) == 0){
        cout << "El numero es divisble" << endl;

    }
    else{
        cout << "El numero no es divisible" << endl;
    }



    return 0;
}

