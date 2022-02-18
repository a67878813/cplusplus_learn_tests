
#include <iostream>

using namespace std;

void PaoA(char const* name) { cout << "和" << name << "看文艺电影" << endl; }
void PaoB(char const* name) { cout << "陪" << name << "逛街购物，我花钱" << endl;  }
void PaoC(char const* name) { cout << name << "，走，到军博看大炮去！" << endl; }
void PaoD(char const* name) { cout << name << "，我们来谈人生好吗？" << endl; }
void PaoE(char const* name) { cout << name << "，川菜还是撸串？" << endl; }


char const* names [] =
{
    "丁晓晓", "贾玲玲", "林子绿", "王梦", "水原希"
};

using F = void (*)(char const*);

F functions [] =
{
    PaoA, PaoB, PaoC, PaoD, PaoE
};


void WeekendDate()
{
    for (auto i=0; i<sizeof(names)/sizeof(names[0]); ++i)
    {
        functions[i](names[i]);
    }
}

int main()
{
    WeekendDate();
}