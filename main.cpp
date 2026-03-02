#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rossz változónév - "_" hiányzik
    std::cout << '1-100 ertekek duplazasa' //";" karakter hiányzik a végén
    for (int i = 0;) //Feltétel hiányzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" //Vége hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // "," helyett ";" kell
    {
        atlag += b[i] // ";" karakter hiányzik a végén
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
