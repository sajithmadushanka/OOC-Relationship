#include<iostream>
using namespace std;
#include<cstring>

class Product
{
private:
    int pId;
    int price;

public:
    Product();
    Product(int pId, int price){
        this->pId = pId;
        this->price  = price;
    }
    int Itemprice(){
        return price;
    }
    ~Product(){
        cout << "destroyed" << endl;
    };
};
class SalePerson
{
private:
    string name;
public:
    SalePerson();
    SalePerson(string name){
            this->name = name;
    }
    void addsale(int qnt, Product *p){
         cout << name << " Sold :" << qnt * p->Itemprice();
    }
        
    ~SalePerson();
};
int main(){
    Product *p1 = new  Product(10, 100);
    SalePerson *s1 = new SalePerson("mash");
    s1->addsale(10,p1);
}




