
Problem 917: Reverse Only Letters

Given a string S, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions. 

Example 1:
Input: "ab-cd"
Output: "dc-ba"

Example 2:
Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:
Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
 

Note:
S.length <= 100
33 <= S[i].ASCIIcode <= 122 
S doesn't contain \ or "
_______________________________________

class Solution {
public:
    string reverseOnlyLetters(string S) {
        stack<char> s;
        int n=S.size();
        for(int i=0;i<S.size();i++){
            if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)){
                s.push(S[i]);
            }
        }
        for(int i=0;i<S.size();i++){
            if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)){
                S[i]=s.top();
                s.pop();
            }
        }
        return S;
    }
};