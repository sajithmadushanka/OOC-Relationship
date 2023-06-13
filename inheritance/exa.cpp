
#include<iostream>
using namespace std;
#include<cstring>

class Animal
{
protected:
    char name[20];
public:
    Animal();
    Animal(const char namet[]){
        strcpy(name,namet);
    };
   virtual void speak(){};
     void song(){
        cout << name << " song" << endl;
        speak();
    }
    ~Animal();
};
class Cat : public Animal
{
public:
    Cat();
    Cat(const char namet[]):Animal(namet){

    };
    void speak(){
        cout << "meow meow " << endl;
    }
    ~Cat();
};


int main(){
    Animal *ani[2];
    ani[0] = new Cat("kity");
    ani[0]->song();
    return 0;
}

