#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "Enter Number of rows:" << endl;
    cin >> r;
    cout << "Enter Number of columns:" << endl;
    cin >> c;
    int arr[r][c];
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cout << "Enter the element:" << endl;
        cin >> arr[i][j];
       } 
    }
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
          cout << arr[i][j] << " ";
       }
    }
    return 0;
}