#include <iostream>

using namespace std;

class ChocolateBoiler {
private:
    bool empty;
    bool boiled;
    static ChocolateBoiler *uniqueInstance;

    ChocolateBoiler() {
        empty = true;
        boiled = false;
    }
public:
    static ChocolateBoiler *getInstance() {
        if (uniqueInstance == nullptr) {
            cout << "Creating unique instance of Chocolate Boiler\n";
            uniqueInstance = new ChocolateBoiler();
        }
        cout << "Returning instance of Chocolate Boiler\n";
        return uniqueInstance;
    }
    void fill() {
        if (isEmpty()) {
            empty = false;
            boiled = false;
            cout << "Filling the boiler with a milk/chocolate mixture\n";
        }
    }
    void drain() {
        if (!isEmpty() && isBoiled()) {
            cout << "Draining the boiled milk and chocolate\n";
            empty = true;
        }
    }
    void boil() {
        if (!isEmpty() && !isBoiled()) {
            cout << "Bringing the contents to a boil\n";
            boiled = true;
        }
    }
    bool isEmpty() {
        return empty;
    }
    bool isBoiled() {
        return boiled;
    }
};

// Initialize the static member variable outside the class
ChocolateBoiler *ChocolateBoiler::uniqueInstance = nullptr;

int main()
{
    // Get the unique instance of the Chocolate Boiler
    ChocolateBoiler *boiler = ChocolateBoiler::getInstance();

    // Fill, boil, and drain the boiler
    boiler->fill();
    boiler->boil();
    boiler->drain();
    
    delete boiler;
    return 0;
}
