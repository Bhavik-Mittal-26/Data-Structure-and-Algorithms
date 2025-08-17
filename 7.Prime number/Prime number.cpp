// This approch is for O(n) 

class Solution {
public:
    bool isPrime(int n) {
        int count = 0; 
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2)  // prime numbers ke sirf 2 divisors hote hain
            return true;
        else
            return false;
    }
};

//This approach is for O(sqrt n) 

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;  

        for (int i = 2; i * i <= n; i++) {  
            if (n % i == 0) {
                return false;  
            }
        }
        return true;  
    }
};

