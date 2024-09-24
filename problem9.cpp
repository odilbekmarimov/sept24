#include <iostream>
using namespace std;
int main(){
    int number, max;
    max=0;
    cin>>number;
    while (number!=0){
        if (number>max){
            max=number;
        }
        cin>>number;
    }
    cout<<"Max is "<<max;
}