// Almacenamiento de libros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int main()
{
    std::string titulo[4];
    std::string anoPublicacion[4];
    std::string nombreAutor[4];

    for (int i = 0; i < 4; i++) {
        std::cout << "Ingresa el titulo del libro " << i + 1 << std::endl;
        std::getline(std::cin, titulo[i]);

        std::cout << "Ingresa el ano de publicacion del libro " << i + 1 << std::endl;
        std::getline(std::cin, anoPublicacion[i]);

        std::cout << "Ingresa el nombre del autor del libro " << i + 1 << std::endl;
        std::getline(std::cin, nombreAutor[i]);
        
        system("CLS");
    }

    for (int i = 0; i < 4; i++) {
        std::cout << std::endl << "----LIBRO----" << i + 1 << std::endl;

        std::cout << "El autor del libro " << i +1 << " es: " << titulo[i] << std::endl;

        std::cout << "El ano de publicacion del libro " << i + 1 << " es: " << anoPublicacion[i] << std::endl;

        std::cout << "El autor del libro " << i + 1 << " es: " << nombreAutor[i] << std::endl;
    }
}

