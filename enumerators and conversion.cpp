
#include <iostream>

enum Pet : int
{
    cat,    //0
    dog,    //1
    pig,    //2
    whale,  //3
};

int main()
{
    std::cout << "0=cat, 1=dog, 2=pig, 3=whale.";
    int input{};
    std::cin >> input;

    Pet pet{ static_cast<Pet>(input) };

    std::cout << "You choose " << input << '\n';

    return 0;
}


