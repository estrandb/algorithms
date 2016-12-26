#ifndef ADJLISTNODE_H_INCLUDED
#define ADJLISTNODE_H_INCLUDED

#include <stdint.h>
#include <vector>

struct AdjListNode
{
    uint32_t index;
    std::vector<uint32_t> weightVector;
    //AdjListNode(std::vector<uint32_t> adjList) : weightVector(adjList){}
    AdjListNode(uint32_t index, uint32_t numVertices) : index(index), weightVector(std::vector<uint32_t>(numVertices)) {}
};

#endif // ADJLISTNODE_H_INCLUDED
