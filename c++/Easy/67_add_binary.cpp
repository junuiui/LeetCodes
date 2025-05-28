#include <string>
#include <bitset>
#include <bits/stdc++.h>

using namespace std;

// string --> binary --> string
class Solution {
public:
    string addBinary(string a, string b) {

        // Issue: out of range
        // int result = std::stoi(a, nullptr, 2) + std::stoi(b, nullptr, 2);



        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            carry = sum / 2;
            result.push_back((sum % 2) + '0');
        }

        reverse(result.begin(), result.end());
        return result;

    }
};