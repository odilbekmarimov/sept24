#include <iostream>
//
// Created by Odilbek Marimov on 9/24/24.
//
using namespace std;
int main(){
    int n,credits;
    int sumCredits=0;
    float mark;
    float totalMark=0;
    cin>>n;

    for (int i=1; i<=n; i++){
        cin>>credits>>mark;
        totalMark = totalMark + mark * credits;
        sumCredits = sumCredits + credits;
    }
    cout<<"Your GPA is "<<totalMark / sumCredits;
}