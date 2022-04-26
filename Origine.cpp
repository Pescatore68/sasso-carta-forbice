#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int i = rand() % 3 + 1;
	int Input;
	cout << " player seleziona la tua mossa: schiacchia '1' se sasso, '2' se carta e '3' se forbice " << endl;
	cin >> Input; 
	cout << "Il bot ha scelto " <<  i << endl;

	if (Input == i ) { cout << "pareggio"; }
	else if (Input == 1 && i == 3) { cout << "hai vinto" << endl; }
	else if (Input = 2 && i == 1) { cout << "hai vinto" << endl; }
	else if (Input == 3 && i == 2) { cout << "hai vinto" << endl; }
	else { cout << "hai perso" << endl; }
}
// condizioni vittoria sono:
// carta vince sasso
// forbice vince carta
// sasso vince forbice 
// se uguali pareggio