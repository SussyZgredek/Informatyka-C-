#include <iostream>

using namespace std;

void rozkladNaCzynnikiPierwsze(int n) {
    int k = 2;
    while (n > 1) {
        while (n % k == 0) {
            cout << k << " ";
            n /= k;
        }
        k++;
    }
}
 
int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba << ": ";
    rozkladNaCzynnikiPierwsze(liczba);
    cout << endl;
    return 0;
}