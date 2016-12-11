#include <Utilities.h>
#include <ShortPath.h>

int main()
{
    std::string const filePath = "/home/sig/projects/algorithms/graph.txt";
    int const numVertices = 200;

    std::vector<std::vector<uint32_t> > vertices;

    std::unique_ptr<Utilities> util(new Utilities());
    util->AdjLengthListToVec(vertices, filePath);
    util->PrintAdjList(vertices, numVertices);

    std::unique_ptr<ShortPath> sp(new ShortPath());

    while (0){}


    return 0;
}
