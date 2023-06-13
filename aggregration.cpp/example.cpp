
#include<iostream>
using namespace std;
#include<cstring>

class Studnet
{
private:
    int StudnetId;
    
public:
    Studnet();
    Studnet( int StudnetId){
        this->StudnetId = StudnetId;
    }
    void displayStudnet(){
        cout << StudnetId  << endl;
    }
    ~Studnet(){
        cout << "deleting " << StudnetId << endl;
    };
};




class Batch
{
private:
    Studnet *studnet[2];
    
public:
    Batch(){

    };
    Batch(Studnet *id1, Studnet *id2){
        studnet[0] =id1;
        studnet[1] = id2;
    }
    void display(){
        for(int i = 0; i < 2 ; i++){
                 studnet[i]->displayStudnet();
        }
       
    }
    ~Batch(){
        cout << "sutdown " << endl;
    };
};



int main(){
        Studnet *s1[2];
        s1[0] = new Studnet(1111);
        s1[1] = new Studnet(110);

        Batch *b1 = new Batch(s1[0], s1[1]);

        b1->display();
        delete b1;
        s1[0]->displayStudnet(); //After the company ABC is deleted the two employees exists.
        
        

}