#include <iostream>

int main() {
int nombre = 0;
std::cout << "Entrez un nombre : ";
std::cin >> nombre;
while (nombre % 2 == 0) {
    for (int i = 0; i <= nombre; i++) {
        if (i % 2 == 0) {
            std::cout << i << " "<< std::endl;
            
        }
     
    }
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;
}


//    for (int i = 0; i <= 100; i += 2) {
//        std::cout << i << " "<< std::endl;
//    }
//
//      for (int i = 0; i <= 100; i++) {
//        if (i % 2 == 0) {
//            std::cout << i << " "<< std::endl;
//        }
//    }
//
//    return 0;
}
