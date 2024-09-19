#include <iostream>

using namespace std;

int main() {
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    if (n1==n2 and n2==n3 and n3==n4) {
        cout<<3;
    }else if((n1==n2 and n1==n3 and n2==n3)
            or
            (n1==n4 and n1==n2 and n2==n4)
            or
            (n3==n4 and n3==n2 and n2==n4)
            or
            (n3==n1 and n3==n4 and n1==n4)) {
        cout<<2;
    }else if ((n1==n2 and n3==n4) or (n1==n3 and n2==n4) or (n2==n3 and n4==n1)) {
        cout<<2;
    }else if (n1==n2 or n1==n3 or n1==n4 or n2==n3 or n2==n4 or n3==n4) {
        cout<<1;
    } else {
        cout<<0;
    }
    return 0;
}
