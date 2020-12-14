#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array array(10);
    for (int i = 0; i < 10; i++)
        array[i] = i + 1;
    array.resize(7);
    array.insertBefore(15, 4);
    array.remove(5);
    // Äîáàâëÿåì ÷èñëà 35 è 50 â êîíåö è â íà÷àëî
    array.insertAtEnd(35);
    array.insertAtBeginning(50);
    for (int j = 0; j < array.getLength(); j++)
        std::cout << array[j] << " ";

    return 0;
}
