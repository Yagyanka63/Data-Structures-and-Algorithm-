#include <iostream>
using namespace std;
int isfull(int a , int b){
    if(b==a){
        cout << " Array Memory Full" << endl;
        return 0;
    }
    return-1;
}
int isempty(int a){
    if(a==0){
        cout << "Nothing to Delete" << endl;
        return 0;
    }
    return-1;
}
int main(){
    int n,s,a,i,c,d;
    cout << "space for array to reserver:" << endl;
    cin >> s;
    int *p = new int[s];
    cout << "how many elements to store in array:" << endl;
    cin >> n;
    if(n>s){
        cout<<"Insufficent Memory"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        cout << "enter the element:" << i << endl;
        cin >> p[i];
    }
    for(int i=0;i<n;i++){
        cout << p[i] << endl;
    }
    cout << "enter the element you want to insert:";
    cin >> a;
    if(isfull(s,n)==0){
        return 0;
    }
    p[n]=a;
    n++;
    cout << "new array" << endl;
    for(i=0;i<n;i++){
        cout << p[i] << endl;
    }
    cout << "enter the element you want to insert at a pos and element:";
    cin >> a >> d;
    if(isfull(s,n)==0){
    return 0;
    }
    for(i=n-1;i>=a-1;i--){
        p[i+1]=p[i];
    }
    p[a-1]=d;
    n++;
    cout << "new array after intertion on pos" << endl;
    for(i=0;i<n;i++){
    cout << p[i] << endl;
    }
    cout << "enter element pos to delete:" << endl;
    cin >> c;
    if(isempty(n)==0){
        return 0;
    }
    for(i=c-1;i<n-1;i++){
       p[i]=p[i+1];
    }
    n--;
    cout << "new array after delete:" << endl;
    for(i=0;i<n;i++){
    cout << p[i] << endl;
    }
    delete[] p;
    return 0;
}