class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        vector <int> result;
        for (int x : nums1){
            st.insert(x);
        }
        for (int y: nums2){
            if (st.count(y)){
                result.push_back(y);
                st.erase(y);
            }
        }
        return result;
    }
};