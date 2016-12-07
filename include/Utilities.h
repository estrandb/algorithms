#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
#include <iostream>
#include <vector>
#include <stdint.h>
#include <fstream>
#include <sstream>


class Utilities
{
    public:
        Utilities();
        virtual ~Utilities();
        void AdjListToVec(std::vector<std::vector<uint32_t> >& vertices, char* filepath);
        void PrintAdjList(std::vector<std::vector<uint32_t> >& vertices, uint32_t printnum);

    protected:

    private:
};

#endif // UTILITIES_H
