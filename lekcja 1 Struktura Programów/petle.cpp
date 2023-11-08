#include <iostream>
using namespace std;

int main(){
	/* Inkrementacja
	i = i + 1
	i += 1
	i++
	Dekrementacja
	i = i - 1
	i -= 1
	i--
	for(wartoscPoczatkowa; warunekKonczacy; krok)
*/


	for(int i = 0; i < 15; i += 2 ){
		cout << i << endl;
}
	//petla zagniezdzona
	for(int i = 0; i < 5; i++ ){
		for(int j = 0 ; j < 5; j++){
			cout << "*";
		}
	cout << endl;
	}



}
