//searching can be optimized by ising binary search
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        
        for(int i=1; i<nums.size(); i++){
            nums[i]=nums[i]+nums[i-1];  
        }
        int j=0;
        for(int i=0; i<queries.size(); i++){
            j=0;
            int temp= queries[i];
            while(j<nums.size() && nums[j]<=temp)  {
                j++;
                queries[i]=j;
            }
            if(j==0)   queries[i]=0;
        }
        return queries;

    }
};
