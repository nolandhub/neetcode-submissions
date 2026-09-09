class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //idea: use for loop run from first element to the end .
        // stop at element checked -> check the element next to it .

        //


        // time complexity too much time 
        //create 2 for loop() => nums[i]==nums[j] return true
        //return false


        //Do not handle all case Solution failed
        // if(nums[stop]== num[n]) -> return true
        //return false

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;

    }
};