#include <iostream>
#include <string>

using std::cout;
using std::string;

int lengthOfLastWord(string s) {

    // remove whitespace from back
        for(int i = (s.length() - 1); i >= 0 ; i--){
            if (s.at(i) != ' '){
                break;
            }
            s.pop_back();
        }

    // get last word count
        int counter = 0;
        for(int i = (s.length() - 1); i >= 0 ; i--){
            if (s.at(i) == ' '){
                break;
            }
            counter++;
            s.pop_back();
        }

        return counter;
    }

int main(){
    cout << lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}