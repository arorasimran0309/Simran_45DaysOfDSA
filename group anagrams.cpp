class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     int hashmapController = 0;
        vector<vector<string>> ans(hashmapController);
        map<string, int> hashmap;
        string tmp;
        for (int i = 0; i < strs.size(); i++)
        {
            tmp = strs.at(i);
            sort(strs.at(i).begin(), strs.at(i).end());
            if (!hashmap.count(strs.at(i)))//if not exist
            {
                hashmap.insert({strs.at(i), hashmapController});
                hashmapController++;
            }
            ans.resize(hashmapController);
            ans.at(hashmap.find(strs.at(i))->second).push_back(tmp);
        }
        return ans;
    }
};
