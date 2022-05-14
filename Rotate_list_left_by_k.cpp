vector<int> solve(vector<int>& nums, int k) {
   rotate(nums.begin(), nums.begin() + k, nums.end());
    return nums;
}