#include <iostream>
#include <vector>


int find_min_if(std::vector<int> fila)
{
    int index = -1;

    for (int position = 0; position < fila.size(); position++)
    {        
        if (fila[position] > 0 && (index == -1 || fila[position] < fila[index]))
            index = position;
    }

    return index;
}

int main(int argc, char** argv)
{
    std::vector<int> fila { -5, 10, 50, -2, 5, -10 };

    int position = find_min_if(fila);
    std::cout << position << std::endl;
}
