#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe liczb pierwszych do wygenerowania:";
	cin >> n;
	
	int lp = 0;
	int p = 2;
	
	while (lp < n) {
		bool prawda = false;
		
		for(int i = 2; i < p; i++) {
			if (p % i == 0) {
				prawda = true;
				break;
			}
		}
		if (!prawda) {
			cout << p << " ";
			lp++;
		}
		p++;
	}
	cout << endl;
	return 0;

}
