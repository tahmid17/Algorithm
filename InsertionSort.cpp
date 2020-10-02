#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
    int i,j,item;

    for(i=1; i<n; i++)
    {
        item=a[i];

        j=i-1;
        while(j>=0&&a[j]>item)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }

}


int main()
{
    int n;
    cin>>n;
    int array1[n];
    for(int i=0; i<n; i++)
        cin>>array1[i];
    insertionSort(array1,n);
    for(int i=0; i<n; i++)
        cout<<array1[i]<<" ";
}
