/*
 * Metodolog√≠a de la Programaci√≥n: Language0
 * Curso 2022/2023
 */

/* 
 * File:   main.cpp
 * @author Isaac Morales Santana <imorsan@correo.ugr.es>
 * @author Francisco Javier Caceres Martin <javicaceres@correo.ugr.es>
 *
 */

#include <string>
#include "Bigram.h" 
Bigram::Bigram(const std::string& text) {
    if(text.size()==2){
        _text = text;
    } else{
        _text = "__";
    }
}

Bigram::Bigram(char first, char second) {
    _text = {first, second};
}

std::string Bigram::getText() const{
    return _text;
}

std::string Bigram::toString() const{
    return _text;
}

const char& Bigram::at(int index) const{
    if (index<0 || index > 2){
        throw std::out_of_range(std::string("const char& Bigram::at(int index) const: ")
                + "invalid position " + std::to_string(index));
    }
    else{
        return _text[index];
    }
}
char& Bigram::at(int index){
    if (index<0 || index > 1){
        throw std::out_of_range(std::string("char& Bigram::at(int index): ")
                + "invalid position " + std::to_string(index));
    }
    else{
        return _text[index];
    }
}

bool isValidCharacter(char character, const std::string& validCharacters){
        for (int i = 0; i < validCharacters.length(); i++){
            if (validCharacters[i] == character)
                return true;
        }
        return false;
}

void toUpper(Bigram &bigram){
    int asciidiff = 'a' - 'A';
    int isodiff = '‡' - '¿';
    for (int i = 0; i <= 1; i++){
        if (bigram.at(i) >= 'a' && bigram.at(i)<= 'z'){
            bigram.at(i) = bigram.at(i) - asciidiff;
        } else if (bigram.at(i) >= '‡' && bigram.at(i)<= '¸'){
            bigram.at(i) = bigram.at(i) - isodiff;
    } 
    }
    
}