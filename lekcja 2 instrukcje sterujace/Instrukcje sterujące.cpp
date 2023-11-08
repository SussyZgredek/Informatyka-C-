#include <iostream>
using namespace std;

int main(){
	
	// liczby ca³kowite - short, int, long, long long, unsigned short
	// liczb zmiennoprzecinkowe - float, double
	// ci¹g znaków - string 
	short a, b;
	cout << "podaj liczbe 1: ";
	cin >> a;
	cout << "podaj liczbe 2: ";
	cin >> b;
	
	//instrukcja waerunkowe - if(warunek)
	if(a > b){
		cout << a << " > " <<b; //cout zmienna << "tekst" << zmienna
	}
	// = operator przypisania
	// == operator porownania
	// <= mniejsze lub rowne
	// != nie rowne czemus
	else if(a == b){
		cout << "a ==b";
	}
	else{
		cout << "a < b";
	}
	
	
cout << endl;
system("pause");
}