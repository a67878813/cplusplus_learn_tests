

class A{};
class B: virtual public A{};
class C: virtual public A{};
class D: public B, public C{};


// costs of RTTI (runtime type identification)
//                                      /obj size / class datasize  // decrease inlining odds
//vitual functions                      /   y       /   y               y
//multiple inheritance                  /   y           y               n
// virtual base classes                 /   y           y               n
// runtime type identification (RTTI)   /   n           y               n



