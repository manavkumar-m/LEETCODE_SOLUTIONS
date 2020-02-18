
Problem 771: Jewels and Stones

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  
You want to know how many of the stones you have are also jewels.The letters in J are guaranteed distinct, and all characters in J and S are letters.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: J = "aA", S = "aAAbbbb"
Output: 3

Example 2:
Input: J = "z", S = "ZZ"
Output: 0

Note:
S and J will consist of letters and have length at most 50.
The characters in J are distinct.
___________________________________________________________________________

    -->>SOLUTION<<--

class Solution 
{
public:
    int numJewelsInStones(string J, string S) 
    {
        int sum=0;
        map<char,int> mp;
        for(int i=0;J[i]!='\0';i++)
        {
            mp[J[i]]++;
        }
        int j=0;
        while(S[j]!='\0')
        {
          auto ch=S[j];
          for(auto i=mp.begin();i!=mp.end();i++)
          {
            if(ch==i->first)
            {
                sum+=i->second;
            }
            
          }
            j++;
         }
        return sum;
    }
};
