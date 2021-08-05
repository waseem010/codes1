#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int brr[size];


    brr[0]=arr[0];

    for(int i=1;i<size;i++){

        brr[i]=brr[i-1]+arr[i];
 }

 cout<<"[";

 for(int i=0;i<=size;i++){

        cout<<brr[i]<<" ";
 }

 cout<<"]";
















return 0;
}