/*
 * 打印图形：
 *                                     **      (2)
 *                                   ****      (4)
 *                                 ******      (6)
 *                               ********      (8)
 *                               *****         (5)
 *                               ***           (3)
 *                               *             (1)
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 0; j < 38 - 2 * i; ++j)
            std::cout << " ";
        for (int k = 0; k < 2 * i; ++k)
            std::cout << "*";
        std::cout << std::endl;
    }

    for (int i = 3; i >= 1; --i)
    {
        for (int j = 0; j < 30; ++j)
            std::cout << " ";
        for (int k = 0; k < 2 * i - 1; ++k)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}


