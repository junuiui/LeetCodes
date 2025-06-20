class Solution {
public:
    bool isPalindrome(string s) {

        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return tolower(c); });
        
        int i = 0, j = s.size() - 1;

        while (i <= j) {
            if ((s.at(i) > 122 || s.at(i) < 97) && (s.at(i) > 57 || s.at(i) < 48)) {
                i++;
                continue;
            }
            if ((s.at(j) > 122 || s.at(j) < 97) && (s.at(j) > 57 || s.at(j) < 48)){
                j--;
                continue;
            }
            if (s.at(i) != s.at(j)) return false; 
            i++, j--;
        }

        return true;
    }
};