#ifndef SHORTPATH_H
#define SHORTPATH_H

#include <vector>
#include <stdint.h>

class ShortPath
{
    public:
        ShortPath();
        virtual ~ShortPath();

        std::vector<uint32_t> X;
        std::vector<uint32_t> A;
    protected:

    private:


};

#endif // SHORTPATH_H
