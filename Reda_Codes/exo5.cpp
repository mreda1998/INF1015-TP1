#include <iostream> 
#include <vector> 
using namespace std;

bool estPair(int nombreEntier)
{
    return (nombreEntier % 2 == 0) ? true : false;
}
int main() {
    int tableau[10];
    cout << "Veuillez entrer 10 numéros: ";

    for (int i = 0; i < 10; ++i) {
        cin >> tableau[i];
    }

    int tableauTrie[10];
    int positionAjout = 0;
    for (int i : tableau) {
        if (estPair(i)) {
            tableauTrie[positionAjout] = i;
            positionAjout++;
        }
    }

    for (int i : tableau) {
        if (!estPair(i)){
            tableauTrie[positionAjout] = i;
            positionAjout++;
        }
    }

    cout << "{";
    for (int i = 0; i < 10; i++){
        cout << tableauTrie[i]<<",";
    }
    cout << "}" ;

}
