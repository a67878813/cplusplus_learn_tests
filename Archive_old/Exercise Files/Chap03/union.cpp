// union.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <cstdint>
#include <bitset>
#include <iostream>
union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main()
{
    union ipv4 addr;
    addr.octets = { 192, 168, 73, 42 };
    printf("addr is %d.%d.%d.%d is %08x\n",
           addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32 );
    std::cout<<std::bitset<32>(addr.i32)<<std::endl;

    uint32_t i2;
    i2 =addr.i32 << 2;
    std::cout << std::bitset<32>(i2) << std::endl;
    return 0;
}
