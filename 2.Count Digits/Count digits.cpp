class Solution {
public:
    int countDigit(int n) {
       int cnt=0;
        while(n>0){
            int last=n%10;   //it is our last digit
            cnt=cnt+1;   //used as we have to count how much time this loop work=number of digits
            n=n/10;

        }
return cnt;
    }
};