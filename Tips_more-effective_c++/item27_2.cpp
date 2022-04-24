#include <iostream>
#include <list>

class HeapTracked{
public:
    class MissingAddress{};
    virtual ~HeapTracked() = 0;
    static void* operator new(size_t size);
    static void operator delete(void * ptr);

    [[nodiscard("dfdf test")]] 
        bool isOnHeap() const;
private:
    using RawAddress = const void*;
    static std::list<RawAddress> addresses;
};
class MyClass{
public:

private:
};

c