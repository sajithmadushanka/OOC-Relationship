#include<iostream>
using namespace std;
#include<cstring>
class Animal
    {
    protected:
        char name[20];

    public:
        Animal() {}
        Animal(const char tname[])
        {
            strcpy(name, tname);
        }
        virtual void speak() {}
        void song()
        {
            cout << name << "'s Song " << endl;
            speak();
            cout << "la la la la" << endl;
            speak();
            cout << "la la la la" << endl;
            speak();
        }
    };
         
class Cat : public Animal
        {
        public:
            Cat() {}
            Cat(const char tname[]) : Animal(tname) {}
            void speak()
            {
                cout << "Meow... Meow..." << endl;
            }
        };
        class Dog : public Animal
        {
        public:
            Dog() {}
            Dog(const char tname[]) : Animal(tname) {}
            void speak()
            {
                cout << "Bow... Bow..." << endl;
            }
        };

      class Cow : public Animal
        {
        public:
            Cow() {}
            Cow(const char tname[]) : Animal(tname) {}
            void speak()
            {
                cout << "Moo... Moo..." << endl;
            }
        };


        int main()
        {
            Animal *ani[4];
            ani[0] = new Cat("Micky the Cat");
            ani[1] = new Dog("Rover the Dog");
            ani[2] = new Cow("roo the Cow");
            ani[3] = new Animal("no name");


            for (int r = 0; r < 4; r++){
                     ani[r]->song();

            }
               
            
            char ch;
            cin >> ch;
            return 0;
        }