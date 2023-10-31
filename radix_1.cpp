#include <iostream>
using namespace std;

int getmax(int arr[],int n)
{
    int k = arr[0];
    for(int i=0;i<n;i++){
        if(k < arr[i])
            k=arr[i];
    }
    return k;
}

void countsort(int arr[],int n,int pos);

void radixsort(int arr[],int n)
{
    int max = getmax(arr,n);
    for(int pos=1;max/pos;pos=pos*10){
        countsort(arr,n,pos);
    }
}

void countsort(int arr[],int n,int pos){
    int count[10] ={0};

    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;
    }

    for(int i=1;i<=9;i++){
        count[i] += count[i-1];
    }

    int b[n];

    for(int i=n-1;i>=0;i--)
    {
        b[--count[(arr[i]/pos)%10]] = arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    radixsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
