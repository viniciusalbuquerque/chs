#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Person{
public:
    string name;
    virtual void putdata() = 0;
    virtual void getdata() = 0;
};

class Professor : public Person {
public: 
    static int prof_ids;
    Professor() {
        id = prof_ids;
        prof_ids++;
    }
    void putdata() {
        cout << name << " "<< age << " " << publications << " " << id << endl;
    }

    void getdata() {
        cin >> name >> age >> publications;
    }
private:
    int id;
    int age;
    int publications;
};

class Student : public Person {
public:
    static int stu_ids;
    Student() { 
        id = stu_ids;
        stu_ids++;
    }
    void putdata() {
        cout << name << " " << age << " " << total << " " << id << endl;
    }

    void getdata() {
        int a,b,c,d,e,f;
        cin >> name >> age >> a >> b >> c >> d >> e >> f;

        total = a + b + c + d + e + f;
    }
private:
    int id;
    int age;
    int total;

};


int Professor::prof_ids = 1;
int Student::stu_ids = 1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
