#include <iostream>
#include <vector>


int min_element(std::vector<int> fila)
{
    int index = 0;

    for (int position = 1; position < fila.size(); position++)
        if (fila[position] < fila[index]) 
            index = position;

    return index;
}

int main(int argc, char** argv)
{
    std::vector<int> fila { 5, 10, 50, 2, 5, -10 };

    int position = min_element(fila);
    std::cout << position << std::endl;
}
