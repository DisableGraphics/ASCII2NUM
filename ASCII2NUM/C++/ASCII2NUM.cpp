/* 
 * File:   ascii2num.cpp
 * Author: disablegraphics
 *
 * Created on 8 de noviembre de 2019, 23:42
 */
#include <iostream>

using namespace std;

int main() {
    char character;
    
    cout << "Please insert a character: ";
    
    cin >> character;
    int valueOfChar{0};
    
    valueOfChar = character;
    
    cout << "The ASCII number of the character is: " << valueOfChar;
}

