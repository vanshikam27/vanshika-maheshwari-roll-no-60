#include<iostream>
using namespace std;

class box{
    private:
    float length;
    public:
    box(float l){
        length = l;

    }
    friend float findlength(box b);
};
float findlength(box b){
    return b.length;

}
int main(){
    box b1(12.3);
    cout<<"length of box."<<findlength(b1);
    return 0;
}
