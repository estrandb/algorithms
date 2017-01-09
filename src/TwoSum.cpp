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
    std::string const filePath = "/home/sig/projects/algorithms/prob1.txt";

    util->HashThis(*hmap, filePath);
    std::cout << hmap->size() << std::endl;

    delete hmap;
    delete util;
}
