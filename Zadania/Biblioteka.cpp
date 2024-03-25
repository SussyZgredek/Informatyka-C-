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
 
class Ksiegarnia {
private:
    Ksiazka ksiazki[7] = {
        {"Tytul1", "autor1", 1925, "Helion1", 23.54},
        {"Tytul2", "autor2", 1926, "Helion2", 24.54},
        {"Tytul3", "autor1", 1927, "Helion3", 25.54},
        {"Tytul4", "autor2", 1928, "Helion1", 26.54},
        {"Tytul5", "autor1", 1921, "Helion2", 27.54},
        {"Tytul6", "autor2", 1930, "Helion3", 28.54},
        {"Tytul7", "autor1", 1931, "Helion1", 29.54}
    };
 
public:
    void wyszukajPoRoku(int rok) {
        cout << "Znalezione ksiazki:\n";
        for (const auto& ksiazka : ksiazki) {
            if (ksiazka.rok >= rok) {
                wyswietlKsiazke(ksiazka);
            }
        }
    }
 
    void wyszukajPoCenie(double cena) {
        cout << "Znalezione ksiazki:\n";
        for (const auto& ksiazka : ksiazki) {
            if (ksiazka.cena > cena) {
                wyswietlKsiazke(ksiazka);
            }
        }
    }
 
    void wyszukajPoWydawnictwie(const string& wydawnictwo) {
        cout << "Znalezione ksiazki:\n";
        for (const auto& ksiazka : ksiazki) {
            if (ksiazka.wydawnictwo == wydawnictwo) {
                wyswietlKsiazke(ksiazka);
            }
        }
    }
 
    void wyswietlKsiazke(const Ksiazka& ksiazka) {
        cout << "Tytul:" << ksiazka.tytul << "\tAutor:" << ksiazka.autor << "\tRok:" << ksiazka.rok << "\tWydawnictwo:" << ksiazka.wydawnictwo << "\tCena:" << ksiazka.cena << endl;
    }
};
 
int main() {
    Ksiegarnia ksiegarnia;
    int wybor;
    int rok;
    double cena;
    string wydawnictwo;
 
    cout << "Witaj w ksiegarnii\n";
    do {
        cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:\n";
        cout << "1. Rok wydania\n";
        cout << "2. Cena\n";
        cout << "3. Wydawnictwo\n";
        cout << "0. Wyjscie\n";
        cin >> wybor;
 
        switch (wybor) {
            case 1:
                cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                cin >> rok;
                ksiegarnia.wyszukajPoRoku(rok);
                break;
            case 2:
                cout << "Podaj cene, od ktorej chcesz zobaczyc ksiazki: ";
                cin >> cena;
                ksiegarnia.wyszukajPoCenie(cena);
                break;
            case 3:
                cout << "Podaj nazwe wydawnictwa, ktorego ksiazki chcesz zobaczyc: ";
                cin >> wydawnictwo;
                ksiegarnia.wyszukajPoWydawnictwie(wydawnictwo);
                break;
            case 0:
                cout << "Dziekujemy za skorzystanie z ksiegarni.\n";
                break;
            default:
                cout << "Niepoprawny wybor, sprobuj ponownie.\n";
                break;
        }
    } while (wybor != 0);
 
    return 0;
}