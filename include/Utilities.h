#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <memory>
#include <unordered_map>

#include <stdint.h>

class Utilities
{
    public:
        Utilities();
        virtual ~Utilities();
        void HashThis(std::unordered_map<int64_t, int64_t>& hashmap, std::string filepath);
        void AdjListToVec(std::vector<std::vector<uint32_t> >& vertices, std::string filepath);
        void AdjLengthListToVec(std::vector<std::vector<uint32_t> >& vertices, std::string filepath);
        void PrintAdjList(std::vector<std::vector<uint32_t> >& vertices, uint32_t printnum);

    protected:

    private:
};

#endif // UTILITIES_H
