#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int a,b,c;
    cout << "enter element to search"<< endl;
    cin >> a;
    b = sizeof(arr)/sizeof(arr[0]);
    int i,c;
    for(i=0;i<b;i++){
        if(arr[i]==a){
            cout<<"element found at index:"<<i<<endl;
            c=true;
        }
    }
    if(c!=true){
        cout <<"element not found in array" << endl;
    }
    return 0;
}


    

