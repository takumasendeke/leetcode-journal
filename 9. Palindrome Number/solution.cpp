#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;

bool isPalindrome(int x) {
        string xString = to_string(x);

        int length = ( xString.length() )/ 2; // truncate down

        for (int i = 0; i <= length - 1; i++){
            char index1 = xString.at(i);
            char index2 = xString.at((xString.length()-1-i));
            if ( index1 != index2 ) {
                return false;
            }
        }

        return true;
    }

int main(){

    

    cout << isPalindrome(12231);
    return 0;
}