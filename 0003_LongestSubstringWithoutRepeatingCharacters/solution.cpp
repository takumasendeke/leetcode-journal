#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::string;
using std::max;

// helper func
bool duplicate(const string& substring,char c){
    // edge case
    if (substring.empty()){return false;}

    int counter = 0;
    for (int i = 0; i < substring.length(); i++ ){
        if (substring.at(i) == c){
            counter++;
        }
    }

    return (counter >= 2);
}

int lengthOfLongestSubstring(const string& s) {

    // edge case check 
    if (s.empty()) {return 0;}

    int length = s.size();

    string currentString = "";
    int longest = 0;

    for (int end = 0; end < length; end++){
        currentString += s.at(end);
        // TODO: implement logic
        while (!duplicate(currentString,s.at(end))){
            currentString += s.at(end);
            longest = max(longest, (int)currentString.size());
        }

        if (duplicate(currentString,s.at(end))){
            currentString.erase(s.begin());
        }

    }

    return longest;
}

int main(){

    string testCase = "bbbbb";

    cout << lengthOfLongestSubstring(testCase) << "\n";
    cout << duplicate("assb",'b');
 
    return 0;
}