#include <iostream>
#include <vector>


int in(std::vector<int> fila, int find)
{
    for (int position = 0; position < fila.size(); position++)
        if (fila[position] == find) 
            return true;

    return false;
}

int main(int argc, char** argv)
{
    std::vector<int> fila { 0, 5, 10, 50, 2, 5, -10 };

    int position = in(fila, 2);
    std::cout << position << std::endl;
}
