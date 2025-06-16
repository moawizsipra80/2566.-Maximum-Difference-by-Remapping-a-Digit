#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int minMaxDifference(int num) 
    {
        string s=to_string(num);
        string s1=s;
        string s2=s;
        int max_val;
        int min_val;
        char replace;
           char replace2;
     for(char &c:s1)
    {
        if(c!='9' )
        {
        
            replace = c;
            break;
    }
    }
         for(char &c:s1)
    {
        if(c==replace )
        {
            c='9';
            // break;
    }
    }
    
        max_val=stoi(s1);

for( char &c1:s2)
    {

         if(c1!='0')
       {
           replace2= c1;
            break;
       }


    }
    for( char &c1:s2)
    {

         if(c1==replace2)
       {
            c1='0';
       }


    }
             min_val=stoi(s2);


    return max_val-min_val;
    }
};