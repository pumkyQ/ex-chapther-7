#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power(int kick = 0, int punch = 0){
        this -> kick = kick; this -> punch = punch;
    }
    Power& operator<<(int x);
    void show();
};

Power& Power::operator<<(int x){
    kick += x;
    punch += x;
    return *this;
}


void Power::show(){
    cout << "kick=" << kick << "punch=" << punch << endl;
}

int main(){
    Power a(2,3);
    a << 3 << 5 << 6;
    a.show();
}