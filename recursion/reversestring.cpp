#include <iostream>
#include <cstring>
using namespace std;
void reverse(int i,int j,char *str)
{
    if(i>j)
    return ;

    else
    {
        swap(str[i],str[j]);
        i++;
        j--;

        reverse(i,j,str);
    }
}
int main()
{
    char* str;
    int i,j;
    str=new char[100];
    cin>>str;
    int len=strlen(str);
    i=0;
    j=len-1;
    reverse(i,j,str);
    cout<<str;
    return 0;

}