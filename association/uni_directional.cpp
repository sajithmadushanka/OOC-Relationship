#include<iostream>
using namespace std;
#include<cstring>
class Manager
{
private:
    int Mid;
public:
    Manager();
    Manager(int Mid){
        this->Mid = Mid;
    }
    void desplay(){
        cout << Mid << endl;
    }
    ~Manager(){
        cout << "destractor ran";
    };
};
//----------------------------
//#include "Manager.h";           if other file
class Department
{
private:
   Manager *m;
public:
    Department();
    Department(Manager *m1){
        m = m1;
    };
    void desplay(){
        m->desplay();
    }
    ~Department();
};
int main(){
    Manager *m1 = new Manager(12);
    Department *d1 = new Department(m1);
    d1->desplay();
}

