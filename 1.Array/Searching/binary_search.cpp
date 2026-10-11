#include <iostream>
using namespace std;
int main(){
    int arr[10]={4,9,6,2,8,5,1,3,7,10};
    int a,temp,i,j,flag,high,mid,low,data,flag2;
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
        low=0;
        high=a-1;
    while(low<=high){
        mid=(low+high)/2;
        if(data==arr[mid]){
            cout << "data found at position:" << mid << endl;
            flag2=1;
        }
        if(data<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;        
        }
    }
    if(flag2!=1){
        cout << "element not found" << endl;
    }
   return 0;
}