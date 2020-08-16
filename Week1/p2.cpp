#include <iostream>
using namespace std;

int main()
{
    int state = 0, i = 0;
    char current, str[30];
    cout<<"Enter input string\n";
    cin>>str;
    while(current=str[i++]){
        switch(state) {
            case 0: 
                if(current == 'a'){
                    state = 1;
                } else if(current == 'b') {
                    state = 3;
                } else {
                    cout<<"Invalid Token";
                }
                break;
            case 1:
                if(current == 'a'){
                    state = 2;
                } else if(current == 'b') {
                    state = 3;
                } else {
                    cout<<"Invalid Token";
                }
                break;
            case 2:
                if(current == 'a'){
                    state = 2;
                } else if(current == 'b') {
                    state = 3;
                }else {
                    cout<<"Invalid Token";
                }
                break;
            case 3:
                if(current == 'a'){
                    state = 1;
                } else if(current == 'b') {
                    state = 4;
                } else {
                    cout<<"Invalid Token";
                }
                break;
            case 4:
                if(current == 'a'){
                    state = 1;
                } else if(current == 'b') {
                    state = 4;
                } else {
                    cout<<"Invalid Token";
                }
                break;
        }
    }

    if(state == 2 || state == 4){
        cout<<"\nString accepted\n";
    } else {
        cout<<"\nString not accepted\n";
    }
    return 0;
}