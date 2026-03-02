#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //Rossz változónév - "_" hiányzik
    std::cout << '1-100 ertekek duplazasa'; //";" karakter hiányzik a végén
    for (int i = 0; i < N_ELEMENTS; i++) //Feltétel hiányzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //Feltétel hiányzik
    {
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; // átlag változó hiányos
    for (int i = 0; i < N_ELEMENTS; i++) // "," helyett ";" kell
    {
        atlag += b[i]; // ";" karakter hiányzik a végén
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Minden Prima" << std::endl;
    return 0;
}
