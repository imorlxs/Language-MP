/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Bigram.cpp
 * Author: isaac
 * 
 * Created on 9 de marzo de 2023, 1:14
 */
#include <string>
#include "Bigram.h" 
//¿Hay que quitar el valor por defecto cuando declaras la función?
Bigram::Bigram(const std::string& text) {
    if(text.size()==2/* && isValidCharacter(text[0], validCharacters) && isValidCharacter(text[1], validCharacters)*/){
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
        return false;
}

void toUpper(Bigram &bigram){
    int diff = 'a' - 'A';
    int diff2 = 'á' - 'Á';
    for (int i = 0; i <= 1; i++){
        if (bigram.at(i) >= 'a' && bigram.at(i)<= 'z'){
            bigram.at(i) = bigram.at(i) - diff;
        } else if (bigram.at(i) >= 'á' && bigram.at(i)<= 'ü'){
            bigram.at(i) = bigram.at(i) - diff2;
    } 
    }
    
}