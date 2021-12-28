#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power operator++(int x);
    void show();
    Power(int kick = 0, int punch = 0){
        this -> kick = kick; this -> punch = punch;
    }
};

Power Power::operator++(int x){
    Power tmp = *this;
    kick++;
    punch++;
    return tmp;
}

void Power::show(){
    cout << "kick=" << kick << "punch=" << punch << endl;
}

int main(){
    Power a(4,5), b;
    a.show();
    b.show();
    b=a++;
    a.show();
    b.show();
}