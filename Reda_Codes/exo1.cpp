/** Programme qui détermine si on a un nombre premier 
 * 
 * **/
#include <iostream> 
#include <cmath>
#include <stdio.h> 
using namespace std;

int main(){

    int nombre; 
    cout << "Entrer un nombre entier: "; 
    cin >> nombre;
    bool estPrime = true;

    if (nombre == 1 || nombre == 0){
        cout << "il n'est pas un nombre premier, car il n'est divisible que par une seule valeur entiere positive et non deux, soit lui-meme.";
        estPrime = false;
    }
    else {
        for (int i = 2;  i <= sqrt(nombre); i += 2){
            if ((nombre % i == 0) & (nombre != i)) {
                cout << nombre << " n'est pas un nombre premier car il est divisible par "<< i;
                estPrime = false;
                break;
            }
        }
    }
    if (estPrime){
            cout << nombre << " est premier";
        }
        
    return 0;  

}