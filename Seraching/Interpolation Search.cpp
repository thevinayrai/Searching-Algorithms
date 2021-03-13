//Recursive Binary Search.
#include<iostream>
using namespace std;
int InterpolationSearch(int a[],int n,int data)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        mid = low + ((data-a[low])*(high-low))/(a[high]-a[low]);
        if(a[mid]==data)
        {
            return mid+1;
        }
        if(data<a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
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
    cout<<"\t\t**** Interpolation Search ****";
    cout<<"\n";
    int result;
    result = InterpolationSearch(a,n,data);
    cout<<"\t\tElement found at position: "<<result;
    return 0;
}