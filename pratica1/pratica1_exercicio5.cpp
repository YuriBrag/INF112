#include <iostream>
using namespace std;


int main() {
    char str[] = "abc teste";
    char *lastChar = str;
    for (; *lastChar; lastChar++){}
    
    for (; (lastChar - (str-1)) != 0; lastChar--){ //for vai até o endereço do lastChar for igual ao endereço inicial do str
        cout << *lastChar;
    }
    cout << endl;
    
    return 0;
}