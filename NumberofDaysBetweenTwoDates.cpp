
Problem 1360: Number of Days Between Two Dates

Write a program to count the number of days between two dates.
The two dates are given as strings, their format is YYYY-MM-DD as shown in the examples 

Example 1:
Input: date1 = "2019-06-29", date2 = "2019-06-30"
Output: 1

Example 2:
Input: date1 = "2020-01-15", date2 = "2019-12-31"
Output: 15
 
Constraints:
The given dates are valid dates between the years 1971 and 2100.
______________________________________________________________________________

    -->>SOLUTION<<--

int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

class Solution 
{
public:
    int getAns(string date)
    {
        int year=0,month=0,day=0,res=0;
        
        for(int i=0;i<4;i++) //getYear
        {
            year=year*10+date[i]-'0';
        }
        for(int i=5;i<7;i++) //getMonth
        {
            month=month*10+date[i]-'0';
        }
        for(int i=8;i<10;i++) //getDay
        {
            day=day*10+date[i]-'0';
        }
        
        for(int i=1971;i<year;i++) //calculateTillGivenYear
        {
            res=res+365;
            if((i%4==0&&i%100!=0)||i%400==0) //leapYear
                res++;
        }
        for(int i=1;i<month;i++) //calculateTillGivenMonth
        {
            res=res+mon[i];
            if(i==2 && ((year%4==0&&year%100!=0)||year%400==0)) //Febuary&leapYear
                res++;
        }
        return res+day;
    }
    
    int daysBetweenDates(string date1, string date2) 
    {
        return abs(getAns(date2)-getAns(date1));
    }
};