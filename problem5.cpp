#include <iostream>
using namespace std;
int main (){
    int i=0;
    for (char ch='A'; ch<='Z'; ch++){
        cout<<ch;
        i++;
        if (i%5==0){
            cout<<endl;
        }
    }
}