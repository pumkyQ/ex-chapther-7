#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
    public:
    Power(int kick=0, int punch=0){
        this -> kick = kick; this -> punch = punch;
    }
    bool operator !();
    void show();
};

bool Power::operator !(){
    if(kick ==0 && punch == 0) return true;
    else return false;
}

void Power::show(){
    cout<< "kick=" << kick << "punch=" << punch << endl;
}

int main(){
    Power a(0,0), b(5,5);
    if(!a) cout<<"a's Power is 0" << endl;
    else  cout << "a's Power isn't 0" << endl;

    if(!b) cout<<"b's Power is 0" << endl;
    else  cout << "b's Power isn't 0" << endl;
}