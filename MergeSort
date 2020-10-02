#include<bits/stdc++.h>
using namespace std;
int array1[100009];
int array2[100009];
void merging(int low, int mid, int high)
{
    int l1, l2, i;
    i=low;
    l1=low;
    l2=mid+1;
    while(l1<=mid&&l2<=high)
    {
        if(array1[l1]<=array1[l2])
            array2[i++]=array1[l1++];
        else
            array2[i++]=array1[l2++];
    }

    while(l1 <= mid)
        array2[i++] = array1[l1++];

    while(l2 <= high)
        array2[i++] = array1[l2++];

    for(i = low; i <= high; i++)
        array1[i] = array2[i];
}

void MargeSort(int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        MargeSort(low, mid);
        MargeSort(mid+1, high);
        merging(low, mid, high);
    }
}

int main()
{
    int i;
    int n;
    cin>>n;
    for(i = 0; i <n; i++)
        cin>>array1[i];
    MargeSort(0,n-1);
    for(i = 0; i <n; i++)
        cout<<array1[i]<<" ";
}
