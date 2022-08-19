#include <iostream>
#include <vector>


int find(std::vector<int> fila, int find)
{
    for (int position = 0; position < fila.size(); position++)
        if (fila[position] == find) 
            return position;

    return -1;
}

int main(int argc, char** argv)
{
    std::vector<int> fila { 0, 5, 10, 50, 2, 5, -10 };

    int position = find(fila, 2);
    std::cout << position << std::endl;
}
