
->Problem- #1332:Remove Palindromic Subsequences
->Solution:
---------------
 class Solution 
 {
 public:
    int removePalindromeSub(string s) 
    {
      if (s.length()==0) 
         return 0;
      string t=s;
      reverse(t.begin(),t.end());
      return (s==t?1:2);
    }
 };