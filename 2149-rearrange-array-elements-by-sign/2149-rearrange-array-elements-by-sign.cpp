class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos, neg;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        for(int k=0;k<n/2;k++){
            nums[2*k+1]=neg[k];
            nums[2*k]=pos[k];
        }
        return nums;   
    }
};