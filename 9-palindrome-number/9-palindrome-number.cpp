class Solution {
public:
    bool isPalindrome(int x) {
        
        long long num=0;
        long long n=x;
        while(x>0)
        {
            num=num*10+x%10;
            x/=10;
        };
        
        if(num==n)
            return true;
        else
            return false;
        
    }
};