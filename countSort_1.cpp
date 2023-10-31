#include <iostream>
using namespace std;

void countsort(int arr[],int n){

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i])
            max = arr[i];
    }

    int *count = new int[max+1];

    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }


    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=max;i++){
        count[i] += count[i-1];
    }

    int b[n];

    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = b[i];
    }
    delete[] count;

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
    countsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
