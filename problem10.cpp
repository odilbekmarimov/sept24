#include <iostream>


using namespace std;
int main(){
    int NumPos=0, NumNeg=0, Total=0;
    int current, i=0;
    cin>>current;
    while(current!=0)
    {
        if (current > 0) {
            NumPos++;
        } else {
            NumNeg++;
        }
        Total += current;
        i++;

        cin >> current;


    }
    cout<<"The number of positives is "<<NumPos<<endl;
    cout<<"The number of negatives is "<<NumNeg<<endl;
    cout<<"The total is "<<i<<endl;
    cout<<"The average is "<<float(Total)/i<<endl;
}