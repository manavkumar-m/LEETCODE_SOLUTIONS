
Problem 1189: Maximum Number of Balloons

Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed. 

Example 1:
Input: text = "nlaebolko"
Output: 1

Example 2:
Input: text = "loonbalxballpoon"
Output: 2

Example 3:
Input: text = "leetcode"
Output: 0

Constraints:
1 <= text.length <= 10^4
text consists of lower case English letters only.
__________________________________________________________________

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n'){
                mp[text[i]]++;
            }
        }
        if(mp.size()!=5)
            return 0;
        
        vector<int> res;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->first=='l' || i->first=='o'){
                res.push_back((i->second)/2);
            }
            else{
                res.push_back(i->second);
            }
        }
        int ans=*min_element(res.begin(),res.end());
        return ans;
    }
};