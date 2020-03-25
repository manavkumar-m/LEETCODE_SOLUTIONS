
Problem 345: Reverse Vowels of a String

Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:
Input: "hello"
Output: "holle"

Example 2:
Input: "leetcode"
Output: "leotcede"
Note:
The vowels does not include the letter "y".
____________________________________________________


bool isVowel(char ch) { 
    return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u')||(ch == 'A') || (ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U'); 
}

class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for(int i=0;s[i]!='\0';i++){
            if(isVowel(s[i])==true){
                st.push(s[i]);
            }
        }
        for(int i=0;s[i]!='\0';i++){
            if(isVowel(s[i])==true){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};
