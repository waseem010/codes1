#include<bits/stdc++.h>
using namespace std;

int maxOfAll(int arr[],int size){

int gMax=0;

for(int i=0;i<size;i++){

    gMax = max(arr[i],gMax);
}



return gMax;

}


 compare(int arr[],int max,int size,int extra){


    for(int i=0;i<size;i++){
        if(arr[i] + extra > max){


        cout<<"true"<<" ";
        }
        else{
        cout<<"false"<<" ";
        }
    }

    



}



int main()
{

    int arr[] = {1,4,5,6,7};
    int extra = 5;

    int size = sizeof(arr)/sizeof(int);
    

    int max  = maxOfAll(arr,size);
    compare(arr,max,size,extra);



























return 0;
}