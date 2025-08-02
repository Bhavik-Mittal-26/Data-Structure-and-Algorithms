class Solution {
public:
    bool isArmstrong(int n) {
        int original=n;
      int sum=0;
       int lastdigit=0;
       while(n>0)
       {
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
         n= n/10;
       }
       return  original==sum;
 }
};