#include <string>
#include <iostream>
#include "PhoneticFinder.cpp"

using namespace std;
using namespace phonetic;


int main(){
    string text = "world";
    string word = "vurlt";

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