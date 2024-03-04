#include <iostream>

int main() {
    int nbrSecret = 59; // Le nombre secret à deviner
    int tentative = 0; // Le nombre de tentatives effectuées par le joueur

    std::cout << "Bienvenue dans le jeu de devinette !" << std::endl;
    std::cout << "Vous devez deviner un nombre entre 1 et 50." << std::endl;

    while (tentative < 10) {
        int guess;
        std::cout << "Tentative " << (tentative + 1) << ": ";
        std::cin >> guess;

        if (guess < nbrSecret) {
            std::cout << "Plus grand !" << std::endl;
        } else if (guess > nbrSecret) {
            std::cout << "Plus petit !" << std::endl;
        } else {
            std::cout << "Gagné !" << std::endl;
            break;
        }

        tentative++;
    }

    if (tentative == 10) {
        std::cout << "Vous avez épuisé toutes vos tentatives. Le nombre secret était : " << nbrSecret << std::endl;
    }

    return 0;
}
