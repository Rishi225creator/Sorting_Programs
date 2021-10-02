#include<bits/stdc++.h>

using namespace std;

void bubble_sort(vector<int> arr,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void display(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubble_sort(arr,n);
    display(arr,n);
    return 0;
}
