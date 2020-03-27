#include <string>
#include <iostream>

using namespace std;

int main(){
    string text = "dGGh";
    string f = "5";
    for (int i = 0; text[i] != '\0' ; i++){
        if(text[i] != ' '){
            if(text[i] > 64 && text[i] < 91){
                text[i] = text[i]+32;
            }
        }
    }
    f=text;
    // for (int i = 0; t[i] != '\0'; i++)
    // {
    //     f+=t[i];
    // }
    
    cout << f << endl;
    return 0;
}