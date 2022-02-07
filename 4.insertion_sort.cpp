#include<iostream>
using namespace std;
void insertion_sort(int[],int);
void readarray(int[],int);
void dispaly(int[],int);

void dispaly(int A[],int n)
{
    int i;
    for (i=0;i<n;i++)
        cout << A[i] << " ";
}
void readarray(int A[],int n)
{
    for(int i=0;i<n;i++)
        cin>>A[i];
}
void insertion_sort(int A[],int n)
{
    int i=0,j;
    i = 0;
    while(i<n)
    {
      j = i;
      while(j>0)
      {
          if(A[j-1]>A[j])
             swap (A[j],A[j-1]);
        j = j -1;
      }
    i ++;
    }
}
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    readarray(A,n);
    insertion_sort(A,n);
    cout<<"SORTED ARRAY: ";
    dispaly(A,n);
}
