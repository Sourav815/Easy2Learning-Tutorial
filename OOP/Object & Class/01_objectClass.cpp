#include <iostream>

using namespace std;

class animal
{
    // private:
    public:
        string sound;
        string animalName;
        void animalSound(void)
        {
            cout<< animalName <<"sounds like "<<sound<<endl;
        }
};

int main(){
    animal Dog;
    animal Lion;

    Dog.animalName = "Dog";
    Dog.sound = "Barks";

    Lion.animalName = "Lion";
    Lion.sound = "Roar";

    Dog.animalSound();
    Lion.animalSound();



    
    return 0;
}