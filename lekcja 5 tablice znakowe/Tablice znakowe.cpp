#include<iostream>
using namespace std;

int main()
{
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); 
	cout<<"Twoje dane osobowe: "<<tablica<<endl;
for (int i = 0; i < 5; i++) {
    cout << tablica[i];
}
    return 0;
}