#include <iostream> 
using namespace std; 
class Student 
{ 
private: 
int rollNo; 
string name; 
string div; 
float marks[10]; 
float total; 
float percentage; 
int n; 
public: 
void getData() 
{ 
cout << “\nEnter Roll Number: “; 
cin >> rollNo; 
cin.ignore(); 
cout << “\nEnter name: “; 
getline(cin, name); 
cout << “\nEnter Division: “; 
getline(cin, div); 
cout << “Enter number of subjects: “; 
cin >> n; 
total = 0; 
for (int I = 0; I < n; i++) 
{ 
cout << “Enter marks of subject “ << I + 1 << “: “; 
cin >> marks[i]; 
total = total + marks[i]; 
} 
} 
void calculate() 
{ 
percentage = total / n; 
} 
void display() 
{ 
cout << “\nRoll Number : “ << rollNo; 
cout << “\nName: “ << name; 
cout << “\nDivision: “ << div; 
cout << “\nTotal Marks : “ << total; 
cout << “\nPercentage : “ << percentage << “%\n”; 
} 
}; 
int main() 
{ 
int stud; 
cout << “Enter number of students: “; 
cin >> stud; 
Student s[10]; 
for (int I = 0; I < stud; i++) 
}
cout << “\n--- Student “ << I + 1 << “ ---"; 
s[i].getData(); 
s[i].calculate(); 
s[i].display(); 
} 
return 0; 
} 