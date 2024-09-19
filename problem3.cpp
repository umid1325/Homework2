#include <iostream>

using namespace std;

int main() {
    char s;
    float h;
    cin>>s>>h;
    if(s=='M') {
        if(h>=1.85) {
            cout<<"Tall"<<endl;
        }else if(h>=1.70 and h<1.85) {
            cout<<"Normal"<<endl;
        }else if(h<1.70) {
            cout<<"Short"<<endl;
        } else {
            cout<<"Wrong height, pls try again.";
        }
    }else if(s=='F') {
        if(h>=1.75) {
            cout<<"Tall"<<endl;
        }else if(h>=1.60 and h<1.75) {
            cout<<"Normal"<<endl;
        }else if(h<1.60) {
            cout<<"Short"<<endl;
        }else {
            cout<<"Wrong height, pls try again.";
        }
    } else {
        cout<<"Wrong Gender, pls try again.";
    }
    return 0;
}
