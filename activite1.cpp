#include <iostream>
using namespace std; // Remove using directive
#include <string> // Add missing include statement

int main() {
    int i;
    string reponse;

    for (i = 0; i < 100; i = i + 1) {
        cout << "iteration " << i;
    }
    cout << "valeur de i apres la boucle " << i << endl;
    cout << "Voulez-vous afficher à nouveau cette boucle? oui ou non" << endl;
    cin >> reponse;

    while (reponse == "oui") {
        for (i = 0; i < 100; i = i + 1) {
            cout << "iteration " << i;
        }
        cout << "valeur de i apres la boucle " << i << endl;
        cout << "Voulez-vous afficher à nouveau cette boucle? oui ou non" << endl;
        cin >> reponse;
        // Remove unnecessary return statement
    }

    return 0;
}
