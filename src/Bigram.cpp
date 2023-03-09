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

#include "Bigram.h"

Bigram::Bigram(const std::string& text="__") {
    if(text.size()==2){
        _text = text;
    } else{
        _text = "__";
    }
}

Bigram::Bigram(char first, char second) {
    _text = first+second;
}

std::string Bigram::getText() const{
    return _text;
}

std::string Bigram::toString() const{
    return _text;
}

const char& Bigram::at(int index) const{
    if (index<0 || index > 2){
        throw std::out_of_range(string("const char& Bigram::at(int index) const: ")
                + "invalid position " + toString(index));
    }
}
