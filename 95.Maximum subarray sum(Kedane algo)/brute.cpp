//TC = bego of n2
#include <bits/stdc++.h>
using namespace std ;
int main() {
int n = 5;
int arr[5] = {1, 2, 3, 4, 5};

int maxSum = INT_MIN;

for(int st=0; st<n; st++) {                 //in this first we are making starting loop for starting point of substring
int currSum = 0;
for(int end=st; end<n; end++) {           // here we are making a loop for ending point but if we notice , while itreating we alredy have 
                                          // while itreating we are reapeting the prevoius sum + one extra elemnt , so instead we just add arr[end]
currSum += arr[end];
maxSum = max(currSum, maxSum);

}
}
cout << "max subarray sum =" << maxSum << endl;

return 0;}