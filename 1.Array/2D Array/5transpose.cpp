#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "Enter Number of rows:" << endl;
    cin >> r;
    cout << "Enter Number of columns:" << endl;
    cin >> c;
    int arr[r][c];
    int arr2[c][r];
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cout << "Enter the element:" << endl;
        cin >> arr[i][j];
       } 
    }
       for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            arr2[j][i]=arr[i][j];
             }
        }
    for(i=0;i<c;i++){
       for(j=0;j<r;j++){
          cout << arr2[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}         

