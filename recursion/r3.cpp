#include <iostream>
using namespace std;
int print(int n)
{
    if(n==0)
    {
    return 0;
    }
    
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n);
    return 0;
}