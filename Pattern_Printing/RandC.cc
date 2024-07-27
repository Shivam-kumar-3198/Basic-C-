#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number of Rows :";
    cin>>m;

    int n;
    cout<<"Enter Number of Columns :";
    cin>>n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}