#include <iostream>
using namespace std;
int main(){
    int a,i,j,temp;
    int arr[]={1,9,7,4,8,6,3,5,10};
    a=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<a;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;   
        }
            arr[j+1]=temp;
            }
    for(i=0;i<a;i++){
        cout << arr[i];
    }
    return 0;
}