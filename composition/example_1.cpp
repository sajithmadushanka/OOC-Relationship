
#include<iostream>
using namespace std;
#include<cstring>

class Room
{
private:
    int roomId;
    
public:
    Room();
    Room( int roomId){
        this->roomId = roomId;
    }
    void displayRoom(){
        cout << roomId  << endl;
    }
    ~Room(){
        cout << "deleting " << roomId << endl;
    };
};




class University
{
private:
    Room *room[2];
    
public:
    University(){
        room[0] = new Room(101);
        room[1] = new Room(102);
    };
    University(int roomid1, int roomid2){
        room[0] = new Room(roomid1);
        room[1] = new Room(roomid2);
    }
    void display(){
        for(int i = 0; i < 2 ; i++){
                 room[i]->displayRoom();
        }
       
    }
    ~University(){
        cout << "sutdown " << endl;
        for(int i = 0; i < 2; i++){
            delete room[i];
            
        }
        cout << "The end" << endl;
    };
};



int main(){
        University *uni = new University();
       
        University * uni1 = new University(201,202);

        uni1->display();
        delete uni1;
}