/*
 * 有A、B、C三个柱子，玩汉诺塔游戏，输出所有移动步骤，例如：
 * 请输入盘子数量：3
 * A->C
 * A->B
 * C->B
 * A->C
 * B->A
 * B->C
 * A->C
 */

#include <stdio.h>
#include <iostream>

using namespace std;

void move(char from, char to)
{
    cout << from << "->" << to << endl;
}

void play_game(int n, char start, char other, char end)
{
    if (n > 2)
    {
        play_game(n - 1, start, end, other);
        move(start, end);
        play_game(n - 1, other, start, end);
    }
    else if (n == 2)
    {
        move(start, other);
        move(start, end);
        move(other, end);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "请输入盘子数量：" ;
    cin >> n;

    play_game(n, 'A', 'B', 'C');

    return 0;

}
