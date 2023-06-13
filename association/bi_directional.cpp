#include<iostream>
using namespace std;
#include<cstring>


class Order;

class Customer
{
private:
    int Mid;
    Order *order[2];
public:
    Customer();
    Customer(int Mid){
        this->Mid = Mid;
    }
    void addOrder(Order *O);
    void desplay(){
        cout << Mid << endl;
    }
    ~Customer(){
        cout << "destractor ran";
    };
};
//----------------------------
//#include "Manager.h";           if other file
class Order
{
private:
   Customer *cus;
   int orid;
public:
    Order();
    Order(int oderid){
       orid = oderid;
    };
    void desplay(){
        cus->desplay();
    }
    ~Order();
};
int main(){
   
}

