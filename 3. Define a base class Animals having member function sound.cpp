#include <iostream>
#include <string.h>
using namespace std;
class Animals
{
    string sound;

public:
    string Sound()
    {
        return sound;
    }
    void set_sound(string sound)
    {
        this->sound = sound;
    }
};
class Dogs : public Animals
{
    string dog_sound;

public:
    string Sound()
    {
        return dog_sound;
    }
    void set_sound(string sound)
    {
        this->dog_sound = sound;
    }
};

int main()
{
    Animals cat;
    cat.set_sound("Meyao");
    string sound = cat.Sound();
    cout << "Sound of Cat is " << (sound) << endl;
    Dogs pets;
    pets.set_sound("Bow");
    cout << "Sound of Dog is " << pets.Sound() << endl
         << endl;
    return 0;
}