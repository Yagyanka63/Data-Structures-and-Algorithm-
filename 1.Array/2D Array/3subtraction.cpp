#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "Enter Number of rows:" << endl;
    cin >> r;
    cout << "Enter Number of columns:" << endl;
    cin >> c;
    cout << "Enter First 2D Mattrice" << endl;
    int arr[r][c];
    int arr2[r][c];
    int arr3[r][c];
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cout << "Enter the element:" << endl;
        cin >> arr[i][j];
       } 
    }
    cout << "Enter Second 2D Mattrice" << endl;
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        cout << "Enter the element:" << endl;
        cin >> arr2[i][j];
       } 
    }
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
        arr3[i][j]=arr[i][j]-arr2[i][j];
       }
    }
    cout << "The resultant Matrice:" << endl;
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
          cout << arr3[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}