#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[],int d,int n)
{ 
    int arr2[n];
    for(int i=0;i<n;i++)
        arr2[i]=arr[(i+d)%n];
    for(int i=0;i<n;i++)
        cout<<(arr[i]=arr2[i])<<" ";
} 
int main()
{
    int arr[112345];
    int d,n;
    cin>>n>>d;
    for(int i=0;i<n;i++)    cin>>arr[i];
    rotate(arr,d,n);
    return 0;
}
