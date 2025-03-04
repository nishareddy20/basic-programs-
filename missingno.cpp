class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int sum = (n * (n + 1)) / 2;
    int s1 = 0;
    for (int i = 0; i < n; i++) {
        s1 += nums[i];
    }
    int missingNum = sum - s1;
    return missingNum;
    }
};
