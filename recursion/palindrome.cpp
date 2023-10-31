#include <iostream>
#include <string>

bool isPalindrome(string str,int i, int j)
{
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    return false;

    else{
        return isPalindrome(str,i+1,j-1);
    }
}
using namespace std;
int main()
{
    
    string str;
    cin>>str;
    bool ans=isPalindrome(str,0,str.length()-1);
    if(ans)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}