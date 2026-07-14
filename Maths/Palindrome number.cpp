class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        long long int remainder=0;
        int org=x;
        int digit=0;
        while (x>0){
            digit=x%10;
            remainder=remainder*10+digit;
            x=x/10;
        }
        if (org==remainder)
            return true;
        else
        return false;
        
    }
};