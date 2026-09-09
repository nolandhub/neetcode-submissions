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
        // unordered_map <int,int> prevMap ;
        // int n = nums.size();

        // for(int i = 0 ; i < n ;i++){
        //     int diff = target - nums[i];
        //     if(prevMap.find(diff) != prevMap.end()){
        //         return {prevMap[diff],i};
        //     }
        //     prevMap.insert({nums[i],i});
        // }
        // return {};

        //HashMap
        // unordered_map <int,int> myMap;

        // for(int i = 0 ; i <nums.size();i++){
        //     myMap[nums[i]] = i;
        // }

        // for(int i = 0 ; i<nums.size();i++){
        //     int diff = target - nums[i];
        //     if(myMap.count(diff) && myMap[diff] != i){
        //        return  {i,myMap[diff]};
        //     }
        // }

        // return {};

        //sort 

        // vector <pair<int,int>> A;
        // int n = nums.size();
        // int l = 0;
        // int r = n-1;

        // for(int i = 0; i < n ;i++){
        //     A.push_back({nums[i],i});
        // }

        // sort(A.begin(),A.end());

        // while(l<r){
        //     int sum = A[l].first + A[r].first;
        //     if(sum == target){
        //         return {min(A[l].second, A[r].second),
        //                 max(A[l].second, A[r].second)};
        //     }else if(sum < target){
        //         l++;
        //     }else{
        //         r--;
        //     }
        // }
        // return {};




    //      unordered_map<int, int> map;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     map[nums[i]] = i;
    // }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int diff = target - nums[i];
    //     if (map.count(diff) && map[diff] != i)
    //         return {i, map[diff]};
    // }
    // return {};





unordered_map<int, int> prevMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (prevMap.count(diff))
            return {prevMap[diff], i};
        prevMap.insert({nums[i], i});
    }
    return {};








    }
};
