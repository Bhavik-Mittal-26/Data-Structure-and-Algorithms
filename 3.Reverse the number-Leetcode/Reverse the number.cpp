class Solution {
public:
    int reverse(int x) {
        long long reversenum = 0;
        while (x != 0) {
            int lastnum = x % 10;
            reversenum = (reversenum * 10) + lastnum;  
            x = x / 10;
        }
        
        if (reversenum < INT_MIN || reversenum > INT_MAX) // we have used conditional due to its not accepting cases of more then 32 bites 
        
            return 0;

        return (int)reversenum;
    }
};
