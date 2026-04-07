#include <iostream>
using namespace std;
class patientDetails{
    public:
    int patientID, daysStay, chargePerDay, totalBill;
    string name;
    patientDetails(string n, int id, int days){
        name = n;
        patientID=id;
        daysStay=days;
        chargePerDay = 1000;
        totalBill = chargePerDay* days;
    }
};

int main(){
    patientDetails p1("Rakesh Sharma", 264, 5);

    cout<<"PATIENT NAME: "<<p1.name<<", ID no.: "<<
    p1.patientID<<" spent "<<p1.daysStay<<" days in the hospital. \nHence the Total bill chargeble will be: Rs."
    <<p1.totalBill;
}
