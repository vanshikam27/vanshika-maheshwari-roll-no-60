#include<iostream>
using namespace std;

inline int square(int a){
    return(a*a);

}
inline int cube(int a){
    return(a*a*a);

}
int main(){
    cout<<"sqr if number."<<square(9)<<" ";
    cout<<"cube of number>"<<cube(9);

    return 0;
}
