//when i first wrote this, i put it in a seperate headerfile "spectool" 
//because i thought it would take up alot more code than it does
#include <iostream>
using namespace std;
bool isAlphabet(char x){
if (x <= 90 && x >= 65|| x <= 122 && x >= 97){ //detects if a letter is within the alphabet
    return true;
} else return false;
} // utilizes ascii decimal values as comparison