class Solution {
public:
    bool isAnagram(string s, string t) {

        // if(s.length()!=t.length()) return false;

        // vector <int> count(26,0);

        // for(int i =0; i<s.length();i++){
        //     count[s[i]-'a']++;
        //     count[t[i]-'a']--;
        // }

        // for(const auto &val : count){
        //     if(val!=0) return false;
        // }

        // return true;

        //Hashmap


         if (s.size() != t.size())
        return false;

    unordered_map<char, int> myMap;

    for (int i = 0; i < s.size(); i++)
    {
        myMap[s[i]]++;
        myMap[t[i]]--;
    }

    // Có suy nghĩ . Nhưng vẫn chưa linh hoạt suy nghĩ . còn vẹt , thuộc ( cải thiện khả năng đi)

    for (auto val : myMap)
    {
        if (val.second != 0)
            return false;
    }

    return true;


    }
};
