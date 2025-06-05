#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        int typedLength = typed.length();
        int nameLength = name.length();

        if (nameLength == 0 || typedLength < nameLength) return false;

        int i = 0;

        for (int j = 0; j < typedLength; j++) {
            if (i < nameLength && name.at(i) == typed.at(j)) i++;
            else if (j == 0 || typed.at(j) != typed.at(j-1)) return false;
        }
        
        return i == nameLength;
    }
};

