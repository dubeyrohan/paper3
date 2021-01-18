#include <bits/stdc++.h>
using namespace std;

int arr1[112345];
int arr2[112345];
int size1,size2;
vector<int> Union,Intersection;

void solve()
{
    cin>>size1>>size2;

    for(int i=0;i<size1;i++)
        cin>>arr1[i];
    for(int i=0;i<size2;i++)
        cin>>arr2[i];

    int i,j;
    for(i=0,j=0;i<size1 && j<size2;)
    {
        if(arr1[i]>arr2[j]) 
            Union.push_back(arr2[j]),j++;
        else if(arr1[i]<arr2[j])
            Union.push_back(arr1[i]),i++;
        else
            Union.push_back(arr1[i]),
            Intersection.push_back(arr1[i]),
            i++,j++;
    }
    while (i<size1)
        Union.push_back(arr1[i++]);
    while (j<size2)
        Union.push_back(arr2[j++]);
    
    cout<<"Union = ";
    for(auto i : Union) cout<<i<<" ";
    cout<<"\nIntersection = ";
    for(auto i : Intersection) 
        cout<<i<<" ";
}  
int main()
{
    solve();
    return 0;
}
