#include <iostream>
using namespace std;
int main(){
    int m,n,p,q,i,j,k,sum;
    cout << "Enter Number of rows 1st Matrice:" << endl;
    cin >> m;
    cout << "Enter Number of columns 1st Matrice:" << endl;
    cin >> n;
    cout << "Enter Number of rows 2nd Matrice:" << endl;
    cin >> p;
    cout << "Enter Number of columns 2nd Matrice:" << endl;
    cin >> q;
    if(n!=p){
        cout << "Matrice Multiplication Not Possible" << endl;
        return 0;
    }
    int arr[m][n];
    int arr2[p][q];
    int arr3[m][q];
    cout << "Enter First Mattrice" << endl;
    for(i=0;i<m;i++){
       for(j=0;j<n;j++){
        cout << "Enter the element:" << endl;
        cin >> arr[i][j];
       } 
    }
    cout << "Enter Second Mattrice" << endl;
    for(i=0;i<p;i++){
       for(j=0;j<q;j++){
        cout << "Enter the element:" << endl;
        cin >> arr2[i][j];
       } 
    }
    for(i=0;i<m;i++){
       for(j=0;j<q;j++){
           sum=0;
           for(k=0;k<n;k++){
            sum+=arr[i][k]*arr2[k][j];
           }
            arr3[i][j]=sum;
       }
    }
    cout << "The resultant Matrice after multiplication:" << endl;
    for(i=0;i<m;i++){
       for(j=0;j<q;j++){
          cout << arr3[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}