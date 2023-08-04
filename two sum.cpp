// Using two pointer
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int a[n];
        for(int i=0;i<nums.size();i++){
            a[i]=nums[i];
        }
        vector<int>v;
        sort(nums.begin(),nums.end());
        int l=0;
        int r=n-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                break;
            }
             else if(nums[l]+nums[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[l]==a[i]){
                v.push_back(i);
            }
           else if(nums[r]==a[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};



//By using hashing
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int a=nums[i];
        int more =target-a;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
    }
    return {-1,-1};
    }
};

