#include <iostream>
#include <vector>




int main(int, char**){

    int input_1, input_2;
    std::vector <int> vec1;
    std::vector <int> vec2;
    std::cout << " Введите значениe input_1 > 64\n";
    std::cin >> input_1;
    if (input_1 > 64){
        std::cout << " Введите значениe input_1 > input_1 \n";
        std::cin >> input_2;
        if (input_2 > input_1 ){

            std::cout << "!\n";




    }
    else{
        std::cout << "Error! Try again!\n";
        return 1;
    }

    }
     else{
        std::cout << "Error! Try again!\n";
        return 1;

    std::cout << "Hello, from sem7!\n";

    return 0;
    
}
}
