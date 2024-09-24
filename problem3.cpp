#include <iostream>
//
// Created by Odilbek Marimov on 9/24/24.
//
using namespace std;
int main (){
    for (i=1;i<101;i++){
        if (i%5==0){
            continue;
        }
        cout<<i<<" ";
    }
}