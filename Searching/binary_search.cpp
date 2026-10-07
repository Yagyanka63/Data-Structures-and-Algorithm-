#include <iostream>
using namespace std;
int main(){
    int arr[10]={4,9,6,2,8,5,1,3,7,10};
    int a,temp,i,j,flag,high,mid,low,data;
    a=sizeof(arr)/sizeof(arr[0]);
    cout <<  "Enter Valude to Search:" << endl;
    cin >> data;
    for(i=0;i<a-1;i++){
        flag=0;
       for(j=0;j<a-1-i;j++)
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
        if(flag!=1){
            break;
        }
    }
    while(mid!=data){
        low=arr[0];
        high=arr[-1];
        mid=arr[a/2];
        if(mid==data){
            cout << "Data found" << mid << endl;
        if(arr[mid]<data){
            low=mid+1;
        }
        if(arr[]
        
        }
            low=mid+1

    }
   return 0;
}