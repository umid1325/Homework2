#include <iostream>

using namespace std;

int main() {
    float n1,n2;
    string s;
    cin>>n1>>s>>n2;
    if (s=="+") {
        cout<<n1+n2;
    }else if(s=="-") {
        cout<<n1-n2;
    }else if(s=="*") {
        cout<<n1*n2;
    }else if(s=="/") {
        cout<<n1/n2;
    }else {
        cout<<"Wrong operation.Try a different one";
    }
    return 0;
}
