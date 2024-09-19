#include <iostream>

using namespace std;

int main() {
    int i1,i2;
    cin>>i1>>i2;
    if (i1==1) {
        cout<<"Mary will choose: Bus";
    }else if (i2==1) {
        cout<<"Mary will choose: Walk";
    }else {
        cout<<"Mary will choose: Bike";
    }
    return 0;
}
