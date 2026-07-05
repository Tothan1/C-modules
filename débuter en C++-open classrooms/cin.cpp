#include <iostream>

// using namespace std;

int main()
{
    double pi;
    // std::string paris("pasfsqfsqfsqfsqdf");
    std::cout << "Combien vaut pi ?" << std::endl;
    std::cin >> pi;
    std::cin.ignore();
    std::cout << "Comment te nommes-tu?" << std::endl;
    std::string name;
    getline(std::cin, name);
    std::cout << "Vous vous appelé " << name << std::endl;
    return 0;
}