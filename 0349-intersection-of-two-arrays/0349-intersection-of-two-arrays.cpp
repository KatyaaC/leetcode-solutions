class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;
        for (int x :nums1){
            mp[x]++;
        }
        for (int j :nums2){
            mp2[j]++;
        }
        for (auto p:mp){
            int nums= p.first;
            if (mp2.count(nums)){
                result.push_back(nums);
            }

        }
        return result;
        }

    
};