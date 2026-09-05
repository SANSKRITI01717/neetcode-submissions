class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int end = n - 1;
        while (st <= end) {
            while (st < end && !((tolower(s[st]) >= 'a' && tolower(s[st]) <= 'z') ||
                                 (tolower(s[st]) >= '0' && tolower(s[st]) <= '9'))) {
                st++;
            }

            while (st < end && !((tolower(s[end]) >= 'a' && tolower(s[end]) <= 'z') ||
                                 (tolower(s[end]) >= '0' && tolower(s[end]) <= '9'))) {
                end--;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            } else {
                st++;
                end--;
            }
        }

        return true;
    }
};
