#include <iostream>
#include <vector>

using namespace std;

string reverseVowels(string s) {
        
        vector<int> pos;
        vector<char> vowel{'a','e','o','i','u','A','E','U','O','I'};
        vector<char> vowels_reverse;

        for (int i = 0; i < s.length(); i++){
            if (s.at(i) == 97 || s.at(i) == 101 || s.at(i) == 105 || s.at(i) == 111 || s.at(i) == 117 ||
                s.at(i) == 65 || s.at(i) == 69 || s.at(i) == 73 || s.at(i) == 79 || s.at(i) == 85) 
                {

                    pos.push_back(i);
                    vowels_reverse.insert(vowels_reverse.begin(), s.at(i));

                }
        }

        for (int i = 0; i < pos.size(); i++){
            s[pos[i]] = vowels_reverse[i];
        }

        for (int i = 0; i < s.length(); i++){
            cout << s[i];
        }
        cout << endl;
        for (int i = 0; i < vowels_reverse.size(); i++){
            cout << vowels_reverse[i];
        }
        cout << endl;
        for (int i = 0; i < pos.size(); i++){
            cout << pos[i];
        }
        cout << endl;
        
        return s;
    }

int main(){

    string s = "hello";

    cout << reverseVowels(s) << endl;
}

/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/