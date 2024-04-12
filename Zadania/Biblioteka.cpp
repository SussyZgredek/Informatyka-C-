#include <iostream>
#include <string>
using namespace std;
 
struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    double cena;
};
 
Ksiazka ksiazki[7] = {
    {"Tytul1", "autor1", 1925, "Helion1", 23.54},
    {"Tytul2", "autor2", 1926, "Helion2", 24.54},
    {"Tytul3", "autor1", 1927, "Helion3", 25.54},
    {"Tytul4", "autor2", 1928, "Helion1", 26.54},
    {"Tytul5", "autor1", 1921, "Helion2", 27.54},
    {"Tytul6", "autor2", 1930, "Helion3", 28.54},
    {"Tytul7", "autor1", 1931, "Helion1", 29.54}
};
 
void wyswietlksiazka(string wydawnictwo) {
    cout << "Znalezione ksiazki dla wydawnictwa " << wydawnictwo << ":\n";
    for (int i = 0; i < 7; ++i) {
        if (ksiazki[i].wydawnictwo == wydawnictwo) {
            cout << "Tytul: " << ksiazki[i].tytul << "\t Autor: " << ksiazki[i].autor
                 << "\t Rok: " << ksiazki[i].rok << "\t Wydawnictwo: " << ksiazki[i].wydawnictwo
                 << "\t Cena: " << ksiazki[i].cena << endl;
        }
    }
}
 
int main() {
    cout << "Witaj w ksiegarnii\n";
    cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:\n";
    cout << "1. Rok wydania\n";
    cout << "2. Cena\n";
    cout << "3. Wydawnictwo\n";
    cout << "0. Wyjscie\n";
    
    int wybor;
    cin >> wybor;
 
    switch (wybor) {
        case 1: {
            int rok;
            cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
            cin >> rok;
            cout << "Znalezione ksiazki:\n";
            for (int i = 0; i < 7; ++i) {
                if (ksiazki[i].rok >= rok) {
                    cout << "Tytul: " << ksiazki[i].tytul << "\t Autor: " << ksiazki[i].autor
                         << "\t Rok: " << ksiazki[i].rok << "\t Wydawnictwo: " << ksiazki[i].wydawnictwo
                         << "\t Cena: " << ksiazki[i].cena << endl;
                }
            }
            break;
        }
        case 2: {
            double cena;
            cout << "Podaj cene, powyzej ktorej chcesz zobaczyc ksiazki: ";
            cin >> cena;
            cout << "Znalezione ksiazki:\n";
            for (int i = 0; i < 7; ++i) {
                if (ksiazki[i].cena > cena) {
                    cout << "Tytul: " << ksiazki[i].tytul << "\t Autor: " << ksiazki[i].autor
                         << "\t Rok: " << ksiazki[i].rok << "\t Wydawnictwo: " << ksiazki[i].wydawnictwo
                         << "\t Cena: " << ksiazki[i].cena << endl;
                }
            }
            break;
        }
        case 3: {
            string wydawnictwo;
            cout << "Podaj nazwe wydawnictwa: ";
            cin >> wydawnictwo;
            wyswietlksiazka(wydawnictwo);
            break;
        }
        case 0: {
            cout << "Wyjscie\n";
            break;
        }
        default: {
            cout << "Niepoprawny wybor, sprobuj ponownie.\n";
            break;
        }
    }
 
    return 0;
}