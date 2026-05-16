class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp = x ;
        long long revNum = 0;
        while(temp > 0){
            int digit = temp % 10;
            temp /= 10 ;
            revNum = revNum*10 + digit ;
        }
        return x == revNum ;
    }
};