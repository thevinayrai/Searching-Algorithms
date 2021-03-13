//Binary Search.
#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int data)
{
    int low=0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(a[mid]==data)
        {
            return mid;
        }
        else if(a[mid]<data)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
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
    cout<<"\t\t**** Binary Search ****";
    cout<<"\n";
    int result;
    result = BinarySearch(a,n,data);
    (result == -1)?cout<<"Element not found in the list!":cout<<"\t\tElement found at position: "<<result;
    return 0;
}
