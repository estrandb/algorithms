#ifndef SHORTPATH_H
#define SHORTPATH_H

#include <stdint.h>

class ShortPath
{
    public:
        ShortPath(uint32_t vertices){X = new uint32_t[vertices];}
        virtual ~ShortPath(){delete[] X;}
    protected:

    private:
    uint32_t* X;
    uint32_t* A;

};

#endif // SHORTPATH_H
