#include <Utilities.h>

int main()
{
    std::string filePath = "/home/sig/projects/algorithms/graph.txt";
    std::vector<std::vector<uint32_t> > vertices;
    std::unique_ptr<Utilities> util(new Utilities());
    util->AdjListToVec(vertices, filePath);
    util->PrintAdjList(vertices, 200);

}
