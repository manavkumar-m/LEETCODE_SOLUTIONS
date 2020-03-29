
Problem 844: Backspace String Compare

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:
Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Example 2:
Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".

Example 3:
Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".

Example 4:
Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".

Note:
1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
Follow up:

Can you solve it in O(N) time and O(1) space?
_____________________________________________________________________

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s,t;
        if(S.size()==0 && T.size()==0){
            return true;
        }
        if(S[0]=='#' && T[0]=='#'){
            return false;    
        }
        if(S[0]=='#' || T[0]=='#'){
            return true;
        }
        
        for(int i=0;S[i]!='\0';i++){
            if(s.empty()==true && S[i]=='#'){
                continue;
            }    
            else{
                if(S[i]=='#'){
                    s.pop();
                }
                else{
                    s.push(S[i]);
                }
            }
        }
        
        for(int i=0;T[i]!='\0';i++){
            if(t.empty()==true && T[i]=='#'){
                continue;
            }    
            else{
                if(T[i]=='#'){
                    t.pop();
                }
                else{
                    t.push(T[i]);
                }
            }
        }
        
        if(s.size()!=t.size()){
            return false;
        }
        while(!s.empty()){
            if(s.top()!=t.top()){
                return false;
            }
            s.pop();
            t.pop();
        }
        return true;
    }
};
