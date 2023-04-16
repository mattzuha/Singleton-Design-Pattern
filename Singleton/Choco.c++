class ChocolateBoiler {
private:
    bool empty;
    bool boiled;
    ChocolateBoiler() {
        empty = true;
        boiled = false;
    }

public:
    void fill() {
        if (isEmpty()) {
            empty = false;
            boiled = false;
            // fill the boiler with a milk/chocolate mixture
        }
    }
    void drain() {
        if (!isEmpty() && isBoiled()) {
            // drain the boiled milk and chocolate
            empty = true;
        }
    }
    void boil() {
        if (!isEmpty() && !isBoiled()) {
            // bring the contents to a boil
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