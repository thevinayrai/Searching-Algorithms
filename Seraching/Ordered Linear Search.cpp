//Ordered linear search.
#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
void display(int a[],int n)
{
    int i;
    cout<<"Array after sorting is:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int OrderedLinearSearch(int a[],int n,int data)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            return i;
        }
        else if(a[i]>data)
        {
            return -1;
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
    cout<<"Enter the numbers in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the data to be searched:\n";
    int data;
    cin>>data;
    bubblesort(a,n);
    display(a,n);
    int result;
    result = OrderedLinearSearch(a,n,data);
    cout<<"\nElement found at position: "<<result;
    return 0;
}