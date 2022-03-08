
struct Day{
    explicit Day(int d)
    : val(d){};
    int val;
};

struct Month1{
    explicit Month1(int d)
    : val(d){};
    int val;
};
class Month{
public:
    static Month Jan() { return Month(1);}
    static Month Feb() { return Month(2);}
    static Month Mar() { return Month(3);}
    static Month Apr() { return Month(4);}
    static Month May() { return Month(5);}


private:
    explicit Month(int m);
};

struct Year{
    explicit Year(int d)
    : val(d){};
    int val;
};

;




class Date{
public:
    Date(const Month& m , const Day& d, const Year& y);

};

int main(){
    // Date d(20, 3, 1995);
    // Date d2(Day(30),Month(2), Year(1995) );
    Date d3(Month(3),Day(30),Year(1995) );

    return 0;
};