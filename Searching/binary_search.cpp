#include <iostream>
using namespace std;
int main(){
    int arr[10]={4,9,6,2,8,5,1,3,7,10};
    int a,temp,i,j,flag;
    a=sizeof(arr)/sizeof(arr[0]);
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
    for(i=0;i<a;i++){
        cout << arr[i];
    }
   return 0;
}