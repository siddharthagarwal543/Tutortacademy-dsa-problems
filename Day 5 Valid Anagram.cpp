//https://leetcode.com/problems/valid-anagram/
class Solution {
public:
//constraints to keep in mind all char should be used and number of occurenes of all char should be equal
    bool isAnagram(string s, string t) {//using hashing TC O(nlogn) and SC O(1)
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:t){
            if(mp.find(it)==mp.end())
            return false;
            mp[it]--;
        }
        for(auto it:mp)
        {
            if(it.second!=0)
            return false;
        }
        return true;
    }
    class Solution {//using sorting TC O(nlogn)
    public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
}
};
};