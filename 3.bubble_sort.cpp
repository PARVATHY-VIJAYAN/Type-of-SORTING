#include<iostream>
using namespace std;
void bubble_sort(int[],int);
void displayarray(int[],int);
int main()
{
    int a[100], n, index;
    cout<<"Enter size: ";
    cin >> n;
    cout << "Enter the Array elements : ";
    if(n!=1)
    {
        for(int i=0;i<n;i++)
            cin >> a[i];
        bubble_sort(a,n);
        displayarray(a,n);
    }
    else
    {
        cin>>a[0];
        cout<<"\nSORTED ARRAY:";
        cout<<a[0];
    }

}
void bubble_sort(int array[],int n)
{
    while(n!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]>=array[i+1])
                swap(array[i],array[i+1]);
        }
        n--;
    }
}
void displayarray(int array[],int n)
{
    cout<<"\nSORTED ARRAY:";
    if(n>2)
    {
        for(int i=1;i<n+1;i++)
            cout<<array[i]<<" ";
    }
    else
    {
        for(int i=0;i<n;i++)
            cout<<array[i]<<" ";
    }
}
