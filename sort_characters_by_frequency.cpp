class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        vector<pair<int, char>> vec;
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
        }
        for(auto i : map){
            vec.push_back({i.second, i.first});
        }
        sort(vec.begin(), vec.end());
        string ans;
        for(auto i : vec){
            int n = i.first;
            while(n--){
                ans.push_back(i.second);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};