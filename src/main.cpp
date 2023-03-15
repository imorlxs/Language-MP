/*
 * Metodolog√≠a de la Programaci√≥n: Language0
 * Curso 2022/2023
 */

/* 
 * File:   main.cpp
 * @author Isaac Morales Santana <imorsan@correo.ugr.es>
 * @author Francisco Manuel Caceres Martin <javicaceres@correo.ugr.es>
 *
 */


/**
 * This program reads a text (without spaces) with a undefined number of 
 * characters and a text with two characters (bigram). It finds the bigrams 
 * contained in the first text, storing them in an array of Bigram. 
 * After that, the bigrams of the array are shown in the standard output. 
 * Then it converts to uppercase the bigrams in the array that are equals to the 
 * bigram of the second text. Finally the bigrams of the array are shown again 
 * in the standard output. 
 * Running example:
 * > language0 < data/SimpleText.txt
 */

#include "Bigram.h"
using namespace std;

void toLower(string &text) {
    int asciidiff = 'a' - 'A';
    int isodiff = '‡' - '¿';
    for (int i = 0; i <= text.length(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + asciidiff;
        } else if (text[i] >= '¿' && text[i] <= '‹') {
            text[i] = text[i] + isodiff;
        }
    }
}

int main(int argc, char* argv[]) {
    // This string contains the list of characters that are considered as
    // valid within a word. The rest of characters are considered as
    // separators
    const string validCharacters = "abcdefghijklmnopqrstuvwxyz\xE0\xE1\xE2\xE3\xE4\xE5\xE6\xE7\xE8\xE9\xEA\xEB\xEC\xED\xEE\xEF\xF0\xF1\xF2\xF3\xF4\xF5\xF6\xF8\xF9\xFA\xFB\xFC\xFD\xFE\xFF";

    string big_components;
    string text;
    
    // Read a text
    cout << "Enter text and the bigram: " << endl;
    cin >> text;
    toLower(text);

    // Read a bigram (tex with two characters)
    cin >> big_components;

    Bigram * bigrams[text.length() - 1];
    Bigram bigram(big_components);

    // Find the bigrams in text and put them in an array of Bigrams
    int counter = 0;
    for (int i = 0; i < text.length() - 1; i++) {
        if (isValidCharacter(text[i], validCharacters) && isValidCharacter(text[i + 1], validCharacters)) {
            bigrams[counter] = new Bigram(text[i], text[i + 1]);
            counter++;
        }
    }
    // Show the bigrams stored in the array
    cout << counter << endl;
    for (int i = 0; i < counter; i++) {
        cout << bigrams[i]->getText() << endl;
    }
    cout << endl;

    // Convert to uppercase the bigrams in the array that are equals to input bigram
    for (int i = 0; i < counter; i++) {
        if (bigrams[i]->getText() == bigram.getText()) {
            toUpper(*bigrams[i]);
        }
    }
    // Show again the bigrams stored in the array
    cout << counter << endl;
    for (int i = 0; i < counter; i++) {
        cout << bigrams[i]->getText() << endl;
    }










}

