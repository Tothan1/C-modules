#include <iostream>

// using namespace std;

void swap(int& a, int& b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 0, b = 3;

    swap(a, b);
        std::cout << "La valeur de la variable a c'est: " << a << std::endl;
    // else
        std::cout << "La valeur de la variable b c'est: " << b << std::endl;
    return 0;
}