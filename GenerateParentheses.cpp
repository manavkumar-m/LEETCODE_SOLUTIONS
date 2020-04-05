
Problem 22. Generate Parentheses

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]
__________________________________

class Solution {
public:
    vector<string> generateParenthesis(int n) {   
            vector<string> res;
            string str=""; 
            generateParenthesis(str,n,0,0,res);
            return res;
        }
    
    void generateParenthesis(string str,int n,int open,int close,vector<string> &res){
        if(close==n){
            res.push_back(str);
        }
        else{
        if(close<open){
            generateParenthesis(str+')',n,open,close+1,res);
        }
        if(open<n){
            generateParenthesis(str+'(',n,open+1,close,res);
        }
        }
    }
};