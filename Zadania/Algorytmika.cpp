#include <iostream>

using namespace std;

int main()
{
    int tab[30] ={6, 4, 7, 1, 2, 3, 4, 1, 3, 7, 5, 6, 4, 7, 8, 1, 9, 8, 4, 3, 1, 6, 8, 6, 2, 5, 6, 2, 4};
    int liczby[30];
    short szukana;
    short index = 0;

    cout << "Podaj liczbe:";
    cin >> szukana;

    for(int i=0; i< sizeof(tab); i++){
        if(tab[i] == szukana){
            liczby[index] = i;
            index++;
        }
    }

    cout << "Pozycje na których znajduje się liczba " << endl;
    for(int i =0; i < index; i++){
        cout << liczby[i] << ", ";
    }
}