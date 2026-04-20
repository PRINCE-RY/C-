#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
protected:
    string name;
    int age;
public:
    Person(){
        
    }
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor : public Person{
    int publications;
    static int cur_id;
public:
    Professor(){
        
    }
    void getdata(){
        cin >> name >> age >>publications;
    }
    void putdata(){
        cout << name <<" "<< age <<" "<<publications<<" "<<++cur_id<<endl;
    }
};
int Professor::cur_id=0;
class Student : public Person{
    int marks[6];
    int sum;
    static int cur_id;
    
public:
    Student(){
        sum =0;
    }
    void getdata(){
        cin >> name >> age ;
        for(int i =0;i<6;i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        for(int i =0 ;i<6;i++){
            sum += marks[i];
        }
        cout << name << " " << age << " "<<sum << " "<<++cur_id<<endl;
    }
};
int Student::cur_id=0;
