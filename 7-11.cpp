#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power(int kick = 0, int punch = 0){
        this -> kick = kick; this -> punch = punch;
    }
    friend Power operator+(int op1, Power op2);
    void show();
};

Power operator+(int op1, Power op2){
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}

void Power::show(){
    cout << "kick=" << kick << "punch=" << punch << endl;
}

int main(){
    Power a(2,3), b;
    a.show();
    b.show();
    b = 2+a;
    a.show();
    b.show();
}