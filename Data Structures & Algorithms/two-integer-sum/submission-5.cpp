class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //brute force 
        // for(int i =0 ; i < nums.size();i++){
        //     for(int j = i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target) return {i,j};

        //     }
        // }
        // return {};

        //Hashmap (OnePass)

        unordered_map <int,int> prevMap ;
        int n = nums.size();

        for(int i = 0 ; i < n ;i++){
            int diff = target - nums[i];
            if(prevMap.find(diff) != prevMap.end()){
                return {prevMap[diff],i};
            }
            prevMap.insert({nums[i],i});
        }

        return {};



    }
};
