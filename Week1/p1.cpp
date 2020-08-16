#include<iostream>
using namespace std;

int main(){
    int i=0, state=0;
    char current, str[100];
    cout<<"Enter input string!!!";
    cin>>str;
    while((current=str[i++])!='\0'){
        switch(state){
            case 0: 
                if(current=='a')
                    state=1;
                else if(current=='b')
                    state=3;
                else{
                    cout<<"Invalid input";
                    exit(0);
                }
                break;
            case 1:
                if(current=='a')
                    state=0;
                else if(current=='b')
                    state=2;
                else{
                    cout<<"Invalid input";
                    exit(0);
                }
                break;
            case 2:
                if(current=='a')
                    state=3;
                else if(current=='b')
                    state=1;
                else{
                    cout<<"Invalid input";
                    exit(0);
                }
                break;
            case 3:
                if(current=='a')
                    state=2;
                else if(current=='b')
                    state=0;
                else{
                    cout<<"Invalid input";
                    exit(0);
                }
                break;
        
        }
    }

    return 0;
}