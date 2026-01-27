#include<iostream>
using namespace std;

class Ammout {
    private: 
    int account;
    public:
    // constructor
    Ammout(){
        account =  09;
    }
    void balanace(int balanace){
        account += balanace;
    }
    void check(){

        cout<<"your balance is "<<account;
    }
};
int main(){
    Ammout s1;
    s1.balanace(200);
    s1.check();

   
   
}