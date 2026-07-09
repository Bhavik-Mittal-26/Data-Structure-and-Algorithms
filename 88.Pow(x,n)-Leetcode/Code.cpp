//TC=log n 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
double myPow(double x, int n) {
double ans = 1.0;
long long nn = n;
if(nn<0) nn =- 1 * nn; //convert negatice to positive 
while(nn) {
if(nn % 2) {
ans = ans *x;
nn = nn - 1;}

else {
x = x * x;
nn = nn / 2;}}

if(n<0) ans=(double)(1.0) /(double)(ans); // for negative n we do this 
return ans;

}};
int main(){
    Solution s;
   double x = 2.00000;
   int n = -2;
   s.myPow(x,n);
   cout<<s.myPow(x,n);

    return 0;
}