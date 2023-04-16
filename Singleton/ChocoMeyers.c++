#include <iostream>

using namespace std;

class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;

    ChocolateBoiler()
    {
        empty = true;
        boiled = false;
    }

public:
    static ChocolateBoiler &getInstance()
    {
        static ChocolateBoiler uniqueInstance; // Meyers' Singleton
        cout << "Returning instance of Chocolate Boiler\n";
        return uniqueInstance;
    }

    void fill()
    {
        if (isEmpty())
        {
            empty = false;
            boiled = false;
            cout << "Filling the boiler with a milk/chocolate mixture\n";
        }
    }
    void drain()
    {
        if (!isEmpty() && isBoiled())
        {
            cout << "Draining the boiled milk and chocolate\n";
            empty = true;
        }
    }
    void boil()
    {
        if (!isEmpty() && !isBoiled())
        {
            cout << "Bringing the contents to a boil\n";
            boiled = true;
        }
    }
    bool isEmpty()
    {
        return empty;
    }
    bool isBoiled()
    {
        return boiled;
    }
};

int main()
{
    ChocolateBoiler &boiler = ChocolateBoiler::getInstance();

    boiler.fill();
    boiler.boil();
    boiler.drain();

    return 0;
}
