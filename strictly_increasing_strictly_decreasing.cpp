bool solve(vector<int>& nums) {
    int s=0,s2=0;
    if(nums.size()<2){
        return true;
    }
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return false;
        }
        if(nums[i]<nums[i+1]){
            s++;
        }
        else if(nums[i]>nums[i+1]){
            s2++;
        }
    }
    if(s==(nums.size()-1) || s2==(nums.size()-1)){
        return true;
    }
    
    return false;
}