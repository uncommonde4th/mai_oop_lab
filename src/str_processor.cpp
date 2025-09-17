#include <string>
#include "../include/str_processor.h"

std::string str_processor(std::string str){
        std::string output;
        int c{0};
        for(size_t i{0}; i < str.size(); ++i){
                 if(isdigit(str[i])){
                                 output += str[i];
                                 ++c;     
                                 }
        }
        if(c == 0){
                output = "Строка не содержит цифр";
        }
        return output;
}

