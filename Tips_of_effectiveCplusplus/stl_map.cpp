#include <functional>
#include <map>
#include <vector>
#include <iostream>

#include <unordered_map>
#include <string>

struct CityRecord
{
    std::string Name;
    uint64_t Population;
    double Latitude;
    double Longitude;

    bool operator<(const CityRecord& other) const{
        return Population<other.Population;
    }

};

namespace std{
    template<>
    struct hash<CityRecord>
    {
        size_t  operator() (const CityRecord& key) const
        {
            return hash<std::string>() (key.Name);
                            //construct  ,   call (key.Name) 
        }

        // size_t  operator() (const CityRecord& key)   
        // {
        //     return hash<std::string>()   (key.Name);
        //                     //construct  ,   call (key.Name) 
        // }
    };

    template<>
    struct equal_to<CityRecord>
    {
        bool operator() (const CityRecord& lhs,  const CityRecord& rhs) const
        {
            return lhs.Name == rhs.Name; 
        }
        
    };


        // size_t  operator() (const CityRecord& key)   
        // {
        //     return hash<std::string>()   (key.Name);
        //                     //construct  ,   call (key.Name) 
        // }
    
}

int main(){

    // std::vector<CityRecord> cities;

    std::unordered_map<CityRecord,  uint32_t > cityFounded; 
    cityFounded[CityRecord{"mmmm", 32323,   2.4,   55.5}];
    // cities.emplace_back("Melbourne", 5000000, 2.4,9.4);
    // cities.emplace_back({"Melb2urne", 5000000, 2.4,9.4});
    // cities.emplace_back({"11", 5000000, 2.4,9.4});
    // cities.emplace_back({"22", 5000000, 2.4,9.4});
    // cities.emplace_back({"33", 5000000, 2.4,9.4});
    // cities.emplace_back({"44", 5000000, 2.4,9.4});

    // for (const auto& city: cities)
    // {
    //     if(city.Name == "11")
    //     {
    //         city.Population;
    //         std::cout << "population :" << city.Population<< std::endl;
    //         break;
    //     }
    // }


    // std::unordered_map<std::string, CityRecord> cityMap; 
    std::map<std::string, CityRecord> cityMap; 

    cityMap["Melbourne"] = CityRecord {"Melbourne", 5000000, 2.4,9.4 };
    cityMap["Melb2urne"] = CityRecord {"Melb2urne", 123, 2.4,9.4 };
    cityMap["11"] = CityRecord {"11", 2342344, 2.4,9.4    };
    cityMap["22"] = CityRecord {"22", 23423, 2.4,9.4    };
    cityMap["Berlin"] = CityRecord {"Berlin", 4567756, 2.4,9.4    };
    cityMap["44"] = CityRecord {"44", 765675, 2.4,9.4    };



    CityRecord& berlinData = cityMap["Berlin"];
                                    // alway insert things
    // berlinData.Population;
    std::cout << berlinData.Population << std::endl;


    berlinData.Name = "Berlin";
    berlinData.Population = 5000;




    //when need to retrive data
    CityRecord& berlinData2 = cityMap.at("Berlin");

    const auto& ci2 = cityMap;
    const CityRecord& bbb2 = ci2.at("Berlin");
    // CityRecord& bbbbb3 = ci2["Berlin"];

    if (cityMap.find("ZBerlin") != cityMap.end() )
    {
        //
        CityRecord& berlinData2 = cityMap.at("ZBerlin");
    }

    cityMap.erase("22");

    //iterator
    //c++ 17 +
    // std::tuple_element<0,std::pair<const std::basic_string<char>, CityRecord>  > ::type
    for (auto&[name , city] : cityMap )
    {
        std::cout << name << "\n Population:  " << city.Population << std::endl;
    };




    

    // fondedMap.insert( std::make_pair(CityRecord {"Melbourne", 5000000, 2.4,9.4 } ,1313 )  );


    return 0;
};