vector<int> solve(vector<int>& nums) {
    int a = -1;
    int b = -1;
    if (nums.size() < 2) {
        return nums;
    }
    int count = 1;
    int s = nums.size();
    sort(nums.begin(), nums.end());
    int i = 0;
    for (i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            if (count > (s / 3)) {
                if (a == -1) {
                    a = nums[i - 1];
                } else
                    b = nums[i - 1];
            }
            count = 1;
        }
    }
    if (count > (s / 3)) {
        if (a == -1) {
            a = nums[i - 1];
        } else
            b = nums[i - 1];
    }
    if (a == -1) {
        return {};
    } else if (b == -1) {
        return {a};
    } else
        return {a, b};
}
▲
