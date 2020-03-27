#include <string>
#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;

bool changeLettre(string t, string w);

namespace phonetic{
	string find(string text, string word){
        string tmp = "", state = "";
        
        for (int i = 1; text[i] != '\0' ; i++){
            if(text[i-1] == ' ' && text[i] == ' ')
                i++;
            else
                tmp[j++] += text[i];
        }
        text = tmp; tmp = "";

        ////////////////////////////
        /// work on word of text ///
        ////////////////////////////

        for (int i = 0; text[i] != '\0' < ; i++){
            if(text[i] != ' ' && text[i+1] != '\0')
                tmp+=text[i];

            else{
                if(text[i+1] == '\0'){
                    
                }
                else if(text[i] == ' '){
                    state = tmp;
                    if (tmp.size == word.size){
                        bool a = changeLettre(tmp, word);
                        if(a==true) break;
                    }
                    tmp=""; // return to nothing for the other word
                }
            }
        }
    if(a==true) return state;
    return throw "Did not find the word 'happ' in the text !";    
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
    bool flag = true;
    for(int i = 0; t[i] != '\0'; i++){
        if(t[i] > 64 && t[i] < 91)
            t[i] = t[i]+32; // change to lower case.
        if(w[i] > 64 && w[i] < 91)
            w[i] = w[i]+32; // change to lower case.

        if(t[i] == 'i' || t[i] == 'y' && w[i] != 'i' || w[i] != 'y') flag = false;
        else if(t[i] == 'o' || t[i] == 'u' && w[i] != 'o' || w[i] != 'u') flag = false;
        else if(t[i] == 'd' || t[i] == 't' && w[i] != 'd' || w[i] != 't') flag = false;
        else if(t[i] == 's' || t[i] == 'z' && w[i] != 's' || w[i] != 'z') flag = false;
        else if(t[i] == 'g' || t[i] == 'j' && w[i] != 'g' || w[i] != 'j') flag = false;
        else if(t[i] == 'v' || t[i] == 'w' && w[i] != 'v' || w[i] != 'w') flag = false;
        else if(t[i] == 'b' || t[i] == 'f' || t[i] == 'p' 
                    && w[i] != 'b' || w[i] != 'f' || w[i] != 'p') flag = false;
        else if(t[i] == 'c' || t[i] == 'k' || t[i] == 'q' 
                    && w[i] != 'c' || w[i] != 'k' || w[i] != 'q') flag = false;
    }
    return flag;

}