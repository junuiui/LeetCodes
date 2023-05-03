#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int index1 = 0;
        int index2 = 0;

        int len1 = word1.length();
        int len2 = word2.length();

        int count = 0;
        string result = "";

        if (len1 == 0) return word2;
        if (len2 == 0) return word1;

        while (index1 < len1 && index2 < len2){

            if (count % 2 == 0){
                result += word1[index1];
                index1++;
            }
            else {
                result += word2[index2];
                index2++;
            }
            count++;
        }

        while (index1 < len1){  
            result += word1[index1];
            index1++;
        }

        while (index2 < len2){
            result += word2[index2];
            index2++;
        }

        return result;
        
    }
};

/*

Instruction from LeetCode

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.

*/
