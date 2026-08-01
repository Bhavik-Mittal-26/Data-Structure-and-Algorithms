class Solution {
public:
    int minPairSum(vector<int>& nums) {
       // by input we can observe that we can find the pairs like largest plus smallest then second largest and second smallest ...... 

        sort(begin(nums), end(nums));

        int i = 0;
        int j = nums.size() - 1;
        int result = 0;

        while (i < j) {
            int sum = nums[i] + nums[j];
            result = max(result, sum);

            i++;
            j--;
        }

        return result;
    }
};