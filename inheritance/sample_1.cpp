#include<iostream>

#include <cstring>

class Shape{
    protected:
        char name[20];
    public:
            Shape(){
               std:: cout << "shape default constractor called" <<  std::endl;
            };
            Shape(const char namet[]){
                 std:: cout << "shape Custom constractor called" <<  std::endl;
               strcpy(name, namet);
            };
           virtual int area() =0; // now this is absract class
            ~Shape(){
                   std:: cout << "shape deconstractor called" <<  std::endl;
            }
};
class Rectange :public Shape{
    protected:
        int width;
        int length;
    public:
        Rectange(){
               std:: cout << "rectangle default constractor called" <<  std::endl;
        };
        Rectange(const char tname[], int width, int length) : Shape(tname){
                    this->width = width;
                    this->length = length;
                     std:: cout << "rectangle Custom constractor called" <<  std::endl;
        };
        int area() {
           return width * length;
        }

};

int main(){
        Shape *sh;
        sh = new Rectange();
        std:: cout << sh->area()<< std::endl;
        delete sh;

        Shape *s1;
       s1 = new Rectange();
    return 0;
}