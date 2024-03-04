#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Initialisation de la graine pour la génération aléatoire

    int nombreMystere = rand() % 100 + 1; // Génération du nombre mystère entre 1 et 100
    int nombreEssais = 0;
    int nombreUtilisateur;

    std::cout << "Vous avez 15 tentatives pour trouver le nombre." << std::endl;

    do {
        std::cout << "Quel est le nombre ? ";
        std::cin >> nombreUtilisateur;

        if (nombreUtilisateur < 1 || nombreUtilisateur > 100) {
            std::cout << "Erreur de saisie !" << std::endl;
            continue;
        }

        nombreEssais++;

        if (nombreUtilisateur < nombreMystere) {
            std::cout << "C'est plus ! Il vous reste " << 15 - nombreEssais << " tentatives" << std::endl;
        } else if (nombreUtilisateur > nombreMystere) {
            std::cout << "C'est moins ! Il vous reste " << 15 - nombreEssais << " tentatives" << std::endl;
        } else {
            std::cout << "Bravo, vous avez trouvé le nombre mystère !!! Au bout de " << nombreEssais << " tentatives." << std::endl;
            break;
        }
    } while (nombreEssais < 15);

    if (nombreEssais == 15) {
        std::cout << "Dommage, vous n'avez pas trouvé le nombre mystère. Le nombre était : " << nombreMystere << std::endl;
    }

    return 0;
}
