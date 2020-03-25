
Problem 412: Fizz Buzz

Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”.
For numbers which are multiples of both three and five output “FizzBuzz”.
Example:
n = 15,
Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
________________________________

bool divByThree(int n)
{
    if(n%3==0)
        return true;
    return false;
}
bool divByFive(int n)
{
    if(n%5==0)
        return true;
    return false;
}
class Solution 
{
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> v;
        for(int i=1;i<n+1;i++)
        {
            if(i<3)
                v.push_back(to_string(i));
            else
            {
            if(divByThree(i)==true && divByFive(i)==true)
                v.push_back("FizzBuzz");
            else if(divByFive(i)==true)
                v.push_back("Buzz");
            else if(divByThree(i)==true)
                v.push_back("Fizz");
            else
                v.push_back(to_string(i));
            }
        }
        return v;
    }
};