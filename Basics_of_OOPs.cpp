#include<iostream>
#include<string.h>
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
int main(){
    char str[] = "ababab";
    char sub[] = "ab";
    char *ptr = str;
    int val = 0;
    while( ( ptr = strstr(ptr, sub) ) != NULL){
        val++;
        ptr++;

    }
    cout<<val;
   
   
}