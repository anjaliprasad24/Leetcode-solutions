class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalnum(s[left])) {
                left++;
            }

            // Skip spaces and punctuation from the right
            else if(!isalnum(s[right])) {
                right--;
            }

            // Compare the characters
            else {
                if(tolower(s[left]) != tolower(s[right])) {
                    return false;
                }

                left++;
                right--;
            }
        }

        return true;
    }
};