#include <string>
#include <iostream>
#include "PhoneticFinder.cpp"

using namespace std;
using namespace phonetic;


int main(){
    string text = "I love dog and    I am eating";
    string word = "Duk";

    string ans = find(text, word);
    cout << "The answer is := " << ans << endl;

    return 0;
}

/*
changement of letters:
v w //
b f p //
g j //
c k q //
s z //
d t //
o u //
i y //
*/