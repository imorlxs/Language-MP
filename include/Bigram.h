/*
 * Metodología de la Programación: Language0
 * Curso 2022/2023
 */

/* 
 * File:   main.cpp
 * @author Isaac Morales Santana <imorsan@correo.ugr.es>
 * @author Francisco Javier Caceres Martin <javicaceres@correo.ugr.es>
 *
 */

#ifndef BIGRAM_H
#define BIGRAM_H

#include <iostream>
#include <string>

/**
 * @class Bigram
 * @brief It represents a pair of characters. It is used to store pairs of 
 * consecutive characters from a text. 
 * It uses a string to store the pair of characters
 */
class Bigram {
public:    
    /**
     * @brief It builds a Bigram object with @p text as the 
     * text of the bigram. If the string @p text contains a number of characters 
     * other than two, then the text of the bigram will be initialized with
     * "__"
     * 
     * @param text the text for the bigram. It should be a string with just two
     * characters.
     */
    Bigram(const std::string& text="__");
    
    /**
     * @brief It builds a Bigram object using the two characters passed as
     * parameters of this constructor as the text of the bigram
     * 
     * @param first the first character for the bigram
     * @param second the second character for the bigram
     */
    Bigram(char first, char second);
    
    /**
     * @brief Obtains a copy of the text of this bigram as a string object
     * @return The text of this bigram as a string object
     */
    std::string getText() const;
    
    /**
     * @brief Obtains a copy of the text of this bigram as a string object
     * @return The text of this bigram as a string object
     */
    std::string toString() const;
    
    /**
     * @brief Gets a const reference to the character at the given position
     * @param index the position to consider
     * @throw std::out_of_range Throws a std::out_of_range exception if the 
     * index is not equals to 0 or 1
     * @return A const reference to the character at the given position
     */
    const char& at(int index) const;
    
    /**
     * @brief Gets a reference to the character at the given position
     * @param index the position to consider
     * @throw std::out_of_range Throws a std::out_of_range exception if the 
     * index is not equals to 0 or 1
     * @return A reference to the character at the given position
     */    
    char& at(int index);
 

private:   
    /**
     * The text in this Bigram. Should be a string with two characters
     */
    std::string _text;
};


/**
 * Checks if the given character is contained in @p validCharacters. That is, if
 * the given character can be consireded as part of a word.
 * @param character The character to check
 * @param validCharacters The set of characters that we consider as possible 
 * characters in a word. Any other character is considered as a separator.
 * @return true if the given character is contained in @p validCharacters; false
 * otherwise
 */
bool isValidCharacter(char character, const std::string& validCharacters);


/**
 * Converts lowercase letters in the given bigram to uppercase
 * @param bigram
 */
void toUpper(Bigram &bigram);

#endif /* BIGRAM_H */
