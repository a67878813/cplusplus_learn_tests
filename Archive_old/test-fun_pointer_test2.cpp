
#include <iostream>
#include <thread>

using namespace std;

void PaoA(char const* name) { cout << "和" << name << "看文艺电影" << endl; }
void PaoB(char const* name) { cout << "陪" << name << "逛街购物，我花钱" << endl;  }
void PaoC(char const* name) { cout << name << "，走，到军博看大炮去！" << endl; }
void PaoD(char const* name) { cout << name << "，我们来谈人生好吗？" << endl; }
void PaoE(char const* name) { cout << name << "，川菜还是撸串？" << endl; }


using F = void (*)(char const*);

F functions [] =
{
    PaoA, PaoB, PaoC, PaoD, PaoE
};

char const* names [] =
{
    "丁晓晓", "贾玲玲", "林子绿", "王梦", "水原希"
};

constexpr std::size_t N = sizeof(names)/sizeof(names[0]);

void WeekendDate()
{
    for (auto i=0; i<N; ++i)
    {
        functions[i](names[i]);
    }
}

void CrazyWeekendDate()
{    
    std::thread trds [N];
    
    for (std::size_t i=0; i<N; ++i)
    {
        auto trd = std::thread([i]
        {
            functions[i](names[i]);
        });
        
        trds[i] = std::move(trd);
    }
    
    for (auto& trd: trds)
    {
        trd.join();
    }
}

int main()
{
    std::cout << "辛苦的周末：\n";
    WeekendDate();
    
    std::cout << "\n";
    
    std::cout << "混乱的周末：\n";
    CrazyWeekendDate();
}