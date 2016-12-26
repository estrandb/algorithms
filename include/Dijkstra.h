#ifndef DIJKSTRA_H
#define DIJKSTRA_H


class Dijkstra
{
    public:
        Dijkstra();
        virtual ~Dijkstra();
        int Run();

    protected:

    private:
        void InitializeNode(const std::vector<uint32_t>& sourceNode, AdjListNode* destNode);
};

#endif // DIJKSTRA_H
