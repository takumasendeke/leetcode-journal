#include <iostream>
#include <string>

using std::cout;
using std::string;

// helper func
bool duplicate(const string& s,char c){
    int counter = 0;
    for (int i = 0; i < s.length(); i++ ){
        if (s.at(i) == c){
            return counter++;
        }
    }

    return (counter >= 2);
}

int lengthOfLongestSubstring(const string& s) {

    // edge case check 
    if (s.empty()) {return 0;}

    int length = s.size();
    int start = 0;

    string currentString = "";

    for (int end = 0; end < length; end++){
        // TODO: implement logic
    }
}

int main(){

    string testCase = "bbbbb";

    // cout << lengthOfLongestSubstring(testCase);
    cout << duplicate("ass",'a');
 
    return 0;
}