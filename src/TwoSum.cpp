#include "TwoSum.h"
#include "Utilities.h"


TwoSum::TwoSum()
{
    //ctor
}

TwoSum::~TwoSum()
{
    //dtor
}

void TwoSum::Run()
{
    Utilities* util = new Utilities();
    std::unordered_map<int64_t, int64_t>* hmap = new std::unordered_map<int64_t, int64_t>();
    std::unordered_map<int64_t, int64_t>* hmapUsed = new std::unordered_map<int64_t, int64_t>();
    std::string const filePath = "/home/sig/projects/algorithms/prob1.txt";

    util->HashThis(*hmap, filePath);
    std::cout << hmap->size() << std::endl;

    int64_t counter = 0;
    int64_t t = 0;

    for (t = -10000; t <= 10000; t++)
    {
        for (auto it = hmap->begin(); it != hmap->end(); ++it)
        {
            int64_t x = it->second;
            int64_t y = t-x;
            if ((hmapUsed->find(x) != hmapUsed->end() && hmapUsed->at(x) == y) || (hmapUsed->find(y) != hmapUsed->end() && hmapUsed->at(y) == x))
            {
                continue;
            }
            auto gotY = hmap->find(y);
            if (gotY == hmap->end())
                continue;
            if (x != y)
            {
                counter++;
                hmapUsed->insert({x,y});
            }
            if (counter > 427)
            {
                std::cout << "Counter overflowed" << std::endl;
                break;
            }
        }
        hmapUsed->clear();
        //std::cout << "t = " << t << std::endl;
        if (counter > 427)
        {
            std::cout << "Counter overflowed" << std::endl;
            break;
        }
    }
    std::cout << counter << std::endl;

    delete hmap;
    delete hmapUsed;
    delete util;
}
