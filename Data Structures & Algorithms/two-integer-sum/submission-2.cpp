class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> Numbers; 
        for (int i = 0 ; i<nums.size() ; i++){
            for(int j = 0 ; j< nums.size(); j++){
                if(nums[i]+nums[j]== target && j !=i){
                    Numbers.push_back(i);
                    Numbers.push_back(j);
                    return Numbers;
                }
            }

        }
        return Numbers;
    }
};
