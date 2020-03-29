
Problem 20: Valid Parentheses

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:
Input: "()"
Output: true

Example 2:
Input: "()[]{}"
Output: true

Example 3:
Input: "(]"
Output: false

Example 4:
Input: "([)]"
Output: false

Example 5:
Input: "{[]}"
Output: true
_____________________________________________

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        if(s.size()==1)
            return false;
        for(int i=n-1;i>=0;i--){
            if(s[i]==']' || s[i]=='}' || s[i]==')'){
                st.push(s[i]);
            }
            else if(st.empty()==false){
                if((s[i]=='['&&st.top()==']')||(s[i]=='{'&&st.top()=='}')
                  ||(s[i]=='('&&st.top()==')')){
                            st.pop();
                }
                else{
                    st.push(s[i]);
            }
            }
            else{
                    st.push(s[i]);
            }
        }
        if(st.empty()==true){
            return true;
        }
        return false;
        
    }
};