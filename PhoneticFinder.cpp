#include <string>
#include <iostream>
#include "PhoneticFinder.hpp"

#define TO_LOWER 32 
using namespace std;

bool changeLettre(string t, string w);

namespace phonetic{
	string find(string text, string word){
        if(word == "") throw runtime_error("ERROR: the word is empty");
        for(int i=0; word[i]!='\0'; i++)
            if(word[i] == ' ') throw runtime_error("ERROR: you trying to find more on one word");
        int j = 0;
        string tmp = "", state = "";
        tmp = text;

        for (int i = 1; text[i] != '\0'; i++){ // To erase a 'space' that not need.
            if(text[i-1] == ' ' && text[i] == ' '){              
                text.replace(i,1,"");
                i--;
            }
        }
        text = tmp; tmp = "";

        ////////////////////////////
        /// work on word of text ///
        ////////////////////////////
        bool a;
        state = word;

        // and stay
        for (int i = 0; text[i] != '\0'; i++){
            if(text[i] != ' ' && text[i+1] != '\0'){
                tmp += text[i];
            }
            else{
                if(text[i+1] == '\0') tmp += text[i];
                if(tmp.size() == word.size()){
                    cout << "t="<< tmp << endl;
                    cout << "w="<< word << endl;
                    a = changeLettre(tmp, word); //worked {false}
                    cout << a << endl;
                    if(a == true)
                        return state;
                }
            tmp = ""; // return tmp to nil for the other word
            
            }
        }
   
    throw runtime_error("ERROR Did not find the word in the text !");
    }

}
   /*
    * b, f, p
    * c, k, q
    * v, w
    * g, j
    * s, z 
    * d, t 
    * o, u
    * i, y
    */

bool changeLettre(string t, string w){
    for(int i = 0; t[i] != '\0'; i++){
        if(t[i] > 64 && t[i] < 91)
            t[i] = t[i]+TO_LOWER; // change to lower case.
        if(w[i] > 64 && w[i] < 91)
            w[i] = w[i]+TO_LOWER; // change to lower case.
        
        cout << "AGAIN" << endl;
        cout << "t="<< t << endl;
        cout << "w="<< w << endl;
        
        if(t[i] == w[i]) continue;
        else if((t[i] == 'i' || t[i] == 'y') && (w[i] != 'i' && w[i] != 'y')) return false;
        else if((t[i] == 'o' || t[i] == 'u') && (w[i] != 'o' && w[i] != 'u')) return false;
        else if((t[i] == 'd' || t[i] == 't') && (w[i] != 'd' && w[i] != 't')) return false;
        else if((t[i] == 's' || t[i] == 'z') && (w[i] != 's' && w[i] != 'z')) return false;
        else if((t[i] == 'g' || t[i] == 'j') && (w[i] != 'g' && w[i] != 'j')) return false;
        else if((t[i] == 'v' || t[i] == 'w') && (w[i] != 'v' && w[i] != 'w')) return false;
        else if((t[i] == 'b' || t[i] == 'f' || t[i] == 'p')
                    && (w[i] != 'b' || w[i] != 'f' || w[i] != 'p')) return false;
        else if((t[i] == 'c' || t[i] == 'k' || t[i] == 'q') 
                    && (w[i] != 'c' || w[i] != 'k' || w[i] != 'q')) return false;
        else if((t[i] == 'a' || t[i] == 'e' || t[i] == 'h' || t[i] == 'l' || t[i] == 'm' || t[i] == 'n' 
                || t[i] == 'r' || t[i] == 'x') && t[i] != w[i]) return false;
    }
    return true;

}