class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for(auto i : arr){
            map[i]++;
        }
        vector<int> vec;
        for(auto i : map){
            vec.push_back(i.second);
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<vec.size()-1; i++){
            if(vec[i]==vec[i+1]){
                return false;
            }
        }
        return true;
    }
};