#include <iostream>
using namespace std;
float Brutto(float netto)
{
    const float stawkaVAT = 0.23;
    return netto * (1 + stawkaVAT);
}

 
float Netto(float brutto)
{
 
    const float stawkaVAT = 0.23;
    return brutto / (1 + stawkaVAT);
}
int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        cout << "Podaj kwote netto: ";
        cin >> netto;
        cout << "Brutto: " << Brutto(netto) << " zl" << endl;
        break;
    case 2:
        cout << "Podaj kwote brutto: ";
        cin >> brutto;
        cout << "Netto: " << Netto(brutto) << " zl" << endl;
        break;
    }
    return 0;
}