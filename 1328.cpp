
Problem 1328: Break a Palindrome

Given a palindromic string palindrome, replace exactly one character by any lowercase English letter so that the string becomes the lexicographically smallest possible string that isn't a palindrome.
After doing so, return the final string.  If there is no way to do so, return the empty string.

Example 1:
Input: palindrome = "abccba"
Output: "aaccba"

Example 2:
Input: palindrome = "a"
Output: "" 

Constraints:
1 <= palindrome.length <= 1000
palindrome consists of only lowercase English letters.
______________________________________________________________________________

   -->>SOLUTION<<--

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();

        if (n <= 1) {
            return "";
        }

        for (int i = 0; i < n; i++) {
            if (i != n - 1 - i && palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        palindrome[n-1] = 'b';
        return palindrome;
    }
};