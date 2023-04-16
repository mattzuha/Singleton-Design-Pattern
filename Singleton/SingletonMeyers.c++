class Singleton
{
private:
    Singleton() {}                                    // Private constructor to prevent direct instantiation
    Singleton(const Singleton &) = delete;            // Delete copy constructor
    Singleton &operator=(const Singleton &) = delete; // Delete assignment operator

public:
    static Singleton &getInstance()
    {
        static Singleton instance; // Static instance created on first call
        return instance;
    }

    // Other useful methods here
};
