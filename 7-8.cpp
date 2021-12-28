#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    void show();
    Power &operator++();
    Power(int kick=0, int punch=0){
        this -> kick = kick; this -> punch = punch;
    }
};

void Power::show(){
    cout << "kick="<< kick << "punch=" << punch << endl;
}

Power& Power::operator++(){
    kick = ++kick;
    punch = ++punch;
    return *this;
}

int main(){
    Power a(3,4), b;
    a.show();
    b.show();
    b=++a;
    a.show();
    b.show();
}