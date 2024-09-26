#include <iostream>
using namespace std;
int main() {
    string s="";
    for (char character = 'A'; character <= 'Z'; character++) {
        s+=character;
    }
    cout << s << endl;
}
