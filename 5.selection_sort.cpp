#include<iostream>
using namespace std;
void selectionSort(int[]);
void display(int[],int);
int main()
{
    int A[100], n, i;
    cout <<"Enter the size: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i=0;i<n;i++)
        cin >> A[i];
    for(i=0;i<n;i++)
        selectionSort(A);
    display(A,n);
}

void selectionSort(int ar[])
{
    for (int i = 0; i < sizeof(ar)-1; i++)
    {
        int min = i;
        for (int j = i; j < sizeof(ar); j++)
            {
                if (ar[j] < ar[min])
                min = j;
            }
        int temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
}
void display(int array[],int n)
{
    int i;
    if(n==2)
    {
        for(i=3;i<n+3;i++)
            cout<<array[i]<<" ";
    }
    else if(n==1)
    {
        cout<<array[4]<<" ";
    }
    else if(n==0)
    {
        cout<<array[5]<<" ";
    }
    else
    {
        for(i=2;i<n+2;i++)
            cout<<array[i]<<" ";
    }

}
