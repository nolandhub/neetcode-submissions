class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //idea: use for loop traverse from first element to the end .
        // stop at element checked -> check the element next to it .

        //
        //create 2 for loop() => nums[i]==nums[j] return true
        //return false

        //Do not handle all case Solution failed
        // if(nums[stop]== num[n]) -> return true
        //return false

        sort(nums.begin(),nums.end());

        for(int i =0 ; i<nums.size();i++){

            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;

    }
};