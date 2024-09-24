#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n; i++){
        for (int ii=1; ii<=n; ii++){
            cout<<'*';
        }
        cout<<endl;
    }
}