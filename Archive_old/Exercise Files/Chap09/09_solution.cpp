// 09_solution.cpp by Bill Weinman <http://bw.org/>
// updated 2002-09-03
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

constexpr size_t maxstring = 1024;  // size of line buffer
constexpr const char * filename = "items.txt";
constexpr char tab_char = '\t';

class Item {
    int _sku;
    std::string _name;
    std::string _desc;
public:
    Item(){ reset(); }
    Item(int sku, std::string & name, std::string & desc) : _sku(sku), _name(name), _desc(desc) {}
    Item(const Item &);
    Item & operator = (const Item &);
    ~Item() { reset(); }
    void reset() { _sku = 0; _name = _desc = "unk"; }
    void sku(int sku) { _sku = sku; }
    int sku() const { return _sku; }
    void name(const std::string & name) { _name = name; }
    std::string name() const { return _name; }
    void desc(const std::string & desc) { _desc = desc; }
    std::string desc() const { return _desc; }
};

Item::Item(const Item & rhs) {
    _sku = rhs._sku;
    _name = rhs._name;
    _desc = rhs._desc;
}

Item & Item::operator=(const Item & rhs) {
    if(this != &rhs) {
        _sku = rhs._sku;
        _name = rhs._name;
        _desc = rhs._desc;
    }
    return *this;
}

// split a string
std::vector<std::string> strsplit(const std::string & s) {
    std::vector<std::string> strs_v;    // vector for results
    int32_t start_loc = 0;
    int32_t sep_loc = 0;
    while(true) {
        sep_loc = s.find(tab_char, start_loc);
        strs_v.push_back(s.substr(start_loc, sep_loc - start_loc));
        if(sep_loc == std::string::npos) break;
        start_loc = sep_loc + 1;
    }
    return strs_v;
}

int32_t main()
{
    char buf[maxstring];    // buffer for reading lines in file

    // open the file
    std::ifstream infile(filename);

    // read the file
    while (infile.good()) {
        // get the line
        infile.getline(buf, sizeof(buf));
        // std::cout << "buf is " <<*buf << std::endl;
        // std::cout << "buffer is " << std::endl;
        // for (const auto& e: buf){
        //     if (e !='\0')
        //     {
        //         std::cout << e ;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        std::cout  << std::endl;
        if(*buf == 0) break;

        // split the string
        std::vector<std::string> split_v = strsplit(buf);

        std::cout << "split_v 's size is " <<split_v.size()  << std::endl;
        if(split_v.size() < 3) continue;

        // construct the object
        Item current_item (  std::stoi(split_v[0])    , split_v[1], split_v[2]);
        std::cout << "sku: " << current_item.sku()
            << ", name: " << current_item.name()
            << ", desc: " << current_item.desc() << std::endl;
        
    }
    infile.close();
    int32_t a = 12;
    int32_t bb = 12;
    std::string abd = "sdfsdf";
    return 0;
}
