//tc=n
//sc=2n
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>sufix(nums.size());
        prefix[0]=1;
        int p=nums[0]; //nums[nums.size()-1]
        sufix[nums.size()-1]=1;
        for(int i=1; i<nums.size(); i++){
            prefix[i]=p;
            p*=nums[i];

        }
         p=nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            sufix[i]=p;
            p*=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=prefix[i]*sufix[i];
        }
        return nums;
    }
};
