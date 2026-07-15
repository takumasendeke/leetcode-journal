#include <iostream>
#include <cmath>
#include <string>

using std::abs;
using std::string;
using std::cout;

int scoreOfString(string s) {
        int length = s.length();
        int i = 0;

        int score = 0;

        for (i ; i < length - 1 ; i++){
            int prev_score = 0;
            prev_score += s.front();
            s.erase(0,1);
            prev_score -= s.front();

            prev_score = abs(prev_score);

            score += prev_score;
        }

        return score;
    }

// test case
int main(){

    string s = "zaz";

    cout << scoreOfString(s);
    return 0;
}
