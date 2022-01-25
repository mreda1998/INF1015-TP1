// Entête

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Dictionnaire
{
    string mot;
    string natureGenre;
    string definition;
};

int main()
{
    fstream fichierDictionnaire;
    fichierDictionnaire.open("dictionnaire.txt", ios::in);

}
