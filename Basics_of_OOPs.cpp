#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

class Ammout {
    private: 
    int account;
    public:
    // constructor
    Ammout(){
       
    }
    void balanace(int balanace){
        account += balanace;
    }
    void check(){

        cout<<"your balance  "<<account;
    }
};

bool prime(int val){
    if( val == 1 || val == 0){
        return true;
    }

    for(int i = 2; i<val; i++){
        if( i % 2 == 0){
            return false;
        }
    }
    return true;


}
int big(int a, int b, int c){
    if( a> b){
        if( a>c){
            return a;
        } else {
           return c;
        }
    } else {
        if( b > c){
            return b;
        } else {
            return c;
        }
    }
    return -1;
}
int main(){
    char str[]= "abababab";
    char sub[]= "ab";
    char* ptr = str;
    int count = 0;
    while((ptr = strstr(ptr,sub))!=NULL){
        count++;
        ptr++;
    }
    cout<<prime(2);
     cout<<big( 3,6,1);
     int a = 10, b = 11, c = 12;
     int big = ( a > b)?((a >c)?a:c): ((b > c)?b:c);
     cout<<big;
}