#include "Utilities.h"

Utilities::Utilities()
{
    //ctor
}

Utilities::~Utilities()
{
    //dtor
}

void Utilities::HashThis(std::unordered_map<int64_t, int64_t>& hashmap, std::string filepath)
{
	std::string vector;

	std::ifstream file(filepath);
	while (getline(file,vector))
	{
        int64_t value;
        std::stringstream lineStream(vector);
        while (lineStream >> value)
        {
            hashmap[value] = value;
        }
	}
}

void Utilities::AdjListToVec(std::vector<std::vector<uint32_t> >& vertices, std::string filepath)
{
	std::string vector;

	std::ifstream file(filepath);
	while (getline(file,vector))
	{
		std::vector<uint32_t> lineData;
		std::stringstream lineStream(vector);

		uint32_t value;
		while (lineStream >> value)
		{
			lineData.push_back(value);
		}
		vertices.push_back(lineData);
	}
}

void Utilities::AdjLengthListToVec(std::vector<std::vector<uint32_t> >& vertices, std::string filepath)
{
    /*
        takes data in the form {(source vertex) (tail vertex),(length of edge) ... (tail vertex),(length of edge)}
    */

    std::string vector;

	std::ifstream file(filepath);
	while (getline(file,vector))
	{
		std::vector<uint32_t> lineData;
		std::stringstream lineStream(vector);

		uint32_t value;
		while (lineStream >> value)
		{
			lineData.push_back(value);
			if (lineStream.peek() == ',')
			{
                lineStream.ignore();
			}
		}
		lineData.erase(lineData.begin());
		vertices.push_back(lineData);
	}
}

void Utilities::PrintAdjList(std::vector<std::vector<uint32_t> >& vertices, uint32_t printnum)
{
	for (uint32_t i = 0 ; i < printnum ; i++)
	{
		for (uint32_t j = 0 ; j < vertices[i].size() ; j++)
		{
			std::cout << vertices[i][j] << " ";
		}
		std::cout << '\n';
	}
}


