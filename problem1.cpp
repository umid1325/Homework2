#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    if (n<=INT_MAX and n>=(-1)*INT_MAX) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    };
    return 0;
}