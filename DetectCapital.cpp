
Problem 520: Detect Capital

Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
 

Example 1:
Input: "USA"
Output: True 

Example 2:
Input: "FlaG"
Output: False
______________________________

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size(),caps=0;
        for(int i=0;i<n;i++){
            if(word[i]>=65 && word[i]<=90){
                caps++;
            }
        }
        if(caps==0 || caps==n)
            return true;
        if(caps>1)
            return false;
        if((word[0]>=65 && word[0]<=90))
            return true;
    	return false;
        
    }
};