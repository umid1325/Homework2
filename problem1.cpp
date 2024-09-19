#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    if (n<=2147483647 and n>=-2147483647) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    };
    return 0;
}