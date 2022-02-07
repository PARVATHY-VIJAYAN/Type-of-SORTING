#include<stdio.h>
#include<iostream>
using namespace std;
int partition(int[],int,int);
void quicksort(int[],int,int);

int partition(int A[], int lo, int hi)
{
    int pivot = A[hi];
    int i = (lo-1);

    for (int j=lo; j<=hi-1; j++)
    {
        if (A[j]<=pivot)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[hi]);
    return (i + 1);
}

void quicksort(int A[],int lo,int hi)
{
    if (lo<hi)
    {
        int p= partition(A,lo,hi);
        quicksort(A,lo,p-1);
        quicksort(A,p+1,hi);
    }
}

int main()
{
    int n,i;

    cout<<"Enter the size: ";
    cin>>n;//size

    int A[n];
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
        cin>>A[i];
    quicksort(A,0,n-1);
    printf("The sorted array :");
    for (i=0; i < n; i++)
        cout<<A[i]<<" ";
    return 0;
}

