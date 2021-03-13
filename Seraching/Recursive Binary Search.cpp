//Recursive Binary Search.
#include<iostream>
using namespace std;
int RecursiveBinarySearch(int a[],int low,int high,int data)
{
    int mid = low + (high-low)/2;
    if(low>high)
    {
        return -1;
    }
    if(a[mid]==data)
    {
        return mid;
    }
    else if(a[mid]<data)
    {
        return RecursiveBinarySearch(a,mid+1,high,data);
    }
    else
    {
        return RecursiveBinarySearch(a,low,mid-1,data);
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the data in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the data to be searched:\n";
    int data;
    cin>>data;
    cout<<"\t\t**** Recursive Binary Search ****";
    cout<<"\n";
    int result;
    result = RecursiveBinarySearch(a,0,n-1,data);
    cout<<"\t\tElement found at position: "<<result;
    return 0;
}