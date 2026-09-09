class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Brute force
        // for(int i = 0 ; i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]) return true;
        //     }
        // }
        // return false;

        //sorting => the coppied will be next to them
        // sort(nums.begin(),nums.end());
        // for(int i = 0; i < nums.size(); i++ ){
        //    if(nums[i]==nums[i+1]) return true;
        // }
        // return false;

        //HashSet => add <T> value into HashSet and use count func to check that any value added is exist ??
        // exist => true else false

        // HashSet have functions such as : insert(),count(),... 
        
        //HashSet solution
        // unordered_set <int> seen;
        // for(int i : nums){
        //    if(seen.count(i)) return true;
        //    seen.insert(i);
        // }
        // return false;









    //       unordered_set<int> seen;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     seen.insert(nums[i]);
    // }
    // if (seen.size() == nums.size())
    // {
    //     return false;
    // }

    // return true;






    unordered_set<int> us;

    for (int i = 0; i < nums.size(); i++)
    {
        if (us.count(nums[i]))
            return true;
        us.insert(nums[i]);
    }

    return false;
















        
    }
};