#include <iostream>
using namespace std;
bool linearsearch(int *arr,int n,int key)
{
    if(n==0)
    {
        return 0;
    }
    if(key==arr[0])
    {
        return true;
    }
    else{
        bool ans=linearsearch(arr+1,n-1,key);
        return ans;
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
    int key;
    cin>>key;
    bool ans=linearsearch(arr,n,key);
    if(ans)
    {
        cout<<"Key Found ";
    }
    else
    cout<<"Key Not Found ";
    delete[] arr;
    return 0;
}