
Problem 49: Group Anagrams

Given an array of strings, group anagrams together.

Example:
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Note:
All inputs will be in lowercase.
The order of your output does not matter.
__________________________________________________________

vector<int> getFreq(string str)
{
    vector<int> v(27,0);
    for(int i=0;i<str.size();i++)
    {
        v[str[i]-97]++;
    }
    return v;
}

class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<vector<int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> q=getFreq(strs[i]);
            mp[q].push_back(strs[i]);
        }
        vector<vector<string>> v;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<string> u;
            u=i->second;
            v.push_back(u);
        }
        return v;
    }
};