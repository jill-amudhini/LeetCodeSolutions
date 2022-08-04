class Solution {
public:
    int mirrorReflection(int p, int q) {
        int m = 1, n=1;
        
        while (m * p != n * q)
        {
            m = ++n * q / p;
        }

        if (n % 2 == 0)
            return 2;
        
        if (m % 2 == 0)
            return 0;
        
        return 1;
    }
};