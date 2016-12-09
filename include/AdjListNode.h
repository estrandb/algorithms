#ifndef ADJLISTNODE_H_INCLUDED
#define ADJLISTNODE_H_INCLUDED

#include <stdint.h>

struct AdjListNode
{
    uint32_t dest;
    uint32_t weight;
    struct AdjListNode* next;
};

#endif // ADJLISTNODE_H_INCLUDED
