#include <iostream>
using namespace std; // Remove using directive
#include <string> // Add missing include statement

int main() {
    int i;
    string reponse;
    int iteration;

    for (i = 100; i > 0; i = i - 1) {
        cout << "iteration " << i << endl;
    }
    cout << "valeur de i apres la boucle " << i << endl;
    cout << "Voulez-vous afficher à nouveau cette boucle? oui ou non" << endl;
    cin >> reponse;

    while (reponse == "oui") {
        for (i = 100; i > 0; i = i - 1) {
            cout << "iteration " << i << endl;
        }
        cout << "valeur de i apres la boucle " << i << endl;
        cout << "Voulez-vous afficher à nouveau cette boucle? oui ou non" << endl;
        cin >> reponse;
        // Remove unnecessary return statement
    }
    cout << "Combien d'itération voulez-vous ?" << endl;
    cin >> iteration;
    while (iteration > 0)
    {
      cout << "iteration " << iteration << endl;
        iteration = iteration - 1;
     
    }

    
    return 0;
}
