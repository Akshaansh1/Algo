#include <iostream>
using namespace std;
int sumArr(int *arr,int n)
{
    int sum=0;
    if(n==0)
    {
        return 0;
    }
    else
    {
        int ans=sumArr(arr+1,n-1);;
        
        return ans+arr[0];
    }
}
int main()
{
    int *arr,n;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum is : "<<sumArr(arr,n);
    return 0;
}