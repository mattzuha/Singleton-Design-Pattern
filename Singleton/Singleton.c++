class Singleton {
private:
    static Singleton* uniqueInstance; 
    // Other useful instance variables here

    Singleton() {} // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance() {
        if (uniqueInstance == nullptr) {
            uniqueInstance = new Singleton();
        }
        return uniqueInstance;
    }

    // Other useful methods here
};

// Initialize the static member variable to nullptr
Singleton* Singleton::uniqueInstance = nullptr;