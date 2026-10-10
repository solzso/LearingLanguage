#include <bits/stdc++.h>

// Normal class creating 


using namespace std;

class Student {
    public : 
        string name;
        int rno;
        float cgpa; 
        int age; 
};

int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
    Student s1;
    s1.name = "Shanto";
    s1.rno = 18;
    s1.cgpa = 3.65; 
    s1.age = 22;
    
    Student s2;
    s2.name = "Shahin";
    s2.rno = 18;
    s2.cgpa = 4; 
    s2.age = 18;

    cout << s1.name << " " << s1.rno << " " << s1.cgpa << s1.age << '\n';
    cout << s2.name << " " << s2.rno << " " << s2.cgpa << s2.age << '\n';
    return 0;
}