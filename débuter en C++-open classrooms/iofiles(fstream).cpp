#include <iostream>
#include <fstream>

// using namespace std;

int main()
{
    int a = 0, b = 3;
    char ligne= 's'; 

    char *ptr;

    ptr = &ligne;

    std::ifstream test("./testa");

    test.get(ligne);
    std::cout<< ligne << std::endl;
    delete ptr;
    // char tab[10];
    // int  resultat = 0;
    // resultat = a + b;
    return 0;
}