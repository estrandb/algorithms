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
    std::string const filePath = "/home/sig/projects/algorithms/prob1test.txt";

    util->HashThis(*hmap, filePath);
    std::cout << hmap->size() << std::endl;

    int64_t counter = 0;

    for (int64_t t = -10000; t <= 10000; t++)
    {
        for (auto it = hmap->begin(); it != hmap->end(); ++it)
        {
            auto got = hmap->find(t - it->first);
            if (got == hmap->end())
                continue;
            int64_t y = hmap->at(t - it->first);
            if (it->first != y)
            {
                counter++;
            }
        }
    }
    std::cout << counter << std::endl;

    delete hmap;
    delete util;
}
