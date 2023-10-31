#include <iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int key)
{
    if(s>e)
    return false;

    int mid=(s+e)/2;
    if(key==arr[mid])
    return true;

    if(arr[mid] < key)
    {
        return binarysearch(arr,mid+1,e,key);
    }

    else
    {
        return binarysearch(arr,s,mid-1,key);
    }
}
int main()
{
    int *arr;
    int n;
    cin>>n;
    arr=new int[n];
    int s=0;
    int e=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool ans=binarysearch(arr,s,e,key);
    if(ans==1)
    {
        cout<<"Key Found";
    }
    else
    {
        cout<<"Key Not Found ";
    }
    delete[] arr;
    return 0;
}