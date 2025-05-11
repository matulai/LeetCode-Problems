class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        string strReverse = str;
        std::reverse(strReverse.begin(), strReverse.end());
        return str == strReverse;
    }
};