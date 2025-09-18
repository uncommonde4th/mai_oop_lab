#include <iostream>
#include <string>
#include "include/str_processor.h"

int main(){
        std::string str;

        std::cout << "Введите строку:" << std::endl;
        std::cin >> str;
        std::cout << "Отфильтрованное число:" << std::endl;
        std::cout << str_processor(str) << std::endl;
        return 0; 
}
