#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    float sum=0;
    cout<<"1/"<<1;
    for (int i=2; i<=n; i++) {
        cout<<" + 1/"<<i;
    }
    cout<<endl;
    for (int i=1; i<=n; i++) {
        sum+=(1/float(i));
    }
    cout<<sum;
}