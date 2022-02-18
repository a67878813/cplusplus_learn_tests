// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <string>

using std::string;

const std::string &func() {
    const static std::string s = "this is from func()";
    puts("this is func()");
    return s;
}

void func2() {
    const static std::string s = "this is from func()";
    puts("this is func2()");
    ;
}

int main() {
    puts("this is main()");
    const string s = func();
    // printf("s is %s\n", s.c_str());

    void (*pfunc)() = func2;
    (*pfunc)();
    return 0;
}
