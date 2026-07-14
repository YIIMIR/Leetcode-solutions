class Solution {
public:
    int reverse(int x) {
        long long int reversed =0;
        int digit = reversed;
        while(x!=0){
            digit=x%10;
            reversed=reversed*10+digit;
            x=x/10;
        }
        if (reversed>INT_MAX||reversed<INT_MIN){
            return 0;
        }
        return reversed;
    }
};