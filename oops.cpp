# include <iostream>
# include <string>
using namespace std ;

class Teacher{
private : // Access Modifier 
    double salary;

public : // can access in whole class and outside
    // properties or attrinutes

    string name;
    string dept;
    string subject;


    Teacher(){ // non parameterized constructor
        cout << "Hi, I am Constructor " << endl;
        dept = "Computer science ";
    }
    Teacher(string name, string dept, string subject, double salary){ //  parameterized constructor
        this -> name = name;  // this keyword is a special type of pointer in c++ that points to the current object 
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }
    // copy constructor
    Teacher(Teacher &orgObj){
        cout  << "Hi, I am a copy Constructor!";
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    }

    // method or member functions
    void changedept(string newdept){
        dept = newdept;
    }

    // setter
    void setSalary(double s){
        salary = s;
    }

    // getter
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout << "name : " << name << endl;
         cout << "subject : " << subject << endl;
    }
};
class Student{
public : 
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; // Heap memory
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this-> name = obj.name;
        cgpaPtr = new double ;
        *cgpaPtr = *obj.cgpaPtr;
    }
    ~Student(){ // destructor used for delete the memory that allocate 
        cout << "Hi, I delete everything!" << endl ;
        delete cgpaPtr; // delete keyword  use when memory is allocate into the heap memory
    }
    void getInfo(){
         cout << "name : " << name << endl;
         cout << "cgpa : " << *cgpaPtr << endl;
    }


};


// Inheritance  
class Person{
public : 
    string name;
    string subject;

    Person(){
        cout << "parent constructor" << endl;
    }

    Person(string name, string subject){
        this->name = name;
        this->subject = subject;
    }

    ~Person(){
        cout << "Parent destructor " << endl;
    }

};

class Empolyee : public Person{
public :
     int rollno ;

     Empolyee(){
        cout << "child Constructor " << endl ;
     }

     Empolyee(string name, string subject, int rollno) : Person(name, subject){
        this->rollno = rollno;
     }
     ~Empolyee(){
        cout << "child destructor " << endl ;
     }

     void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
        cout << "Roll no : " << rollno << endl;
     }
};


// Abstract classes
class shape{
    virtual void draw() = 0; // pure virtual function
};

class circle : public shape{
    public : 
    void draw(){
        cout << "Drawing is Circle";
    }
};

class abc {
public : 
    abc(){
        cout << "constructor " << endl ;
    }
    ~abc(){
        cout << "destructor " << endl;
    }
};

int main(){
    // Teacher t1("Prem","Comptuer Science", "C++", 85000); // constructor call  called only one time at creation of object!

    // Teacher t2 (t1); // default copy constructor call 
    // t2.getInfo();
    // cout << endl ;
    // Student s1("Prem",8.9);
    // Student s2(s1);

    // s1.getInfo();
    // *(s2.cgpaPtr) = 9.2;
    // s1.getInfo();

    // s2.name = "Parmar";
    // s2.getInfo();
    // Empolyee e1;
    // e1.name = "Prem";
    // e1.subject = "Cyber";
    // e1.rollno = 240;

    // e1.getInfo();
    // circle c1;
    // c1.draw();
    if(true){
       static abc a;
    }
    cout << "function end " << endl ;
    return 0;
}