/*
 * 一圆型游泳池如图所示，现在需在其周围建一圆型过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。
 * 过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。
 *
 * 图形描述：
 * 大圆嵌套小圆：小圆在大圆中间，小圆为游泳池，大圆与小圆间隔为过道。
*/

#include <stdio.h>
#include <math.h>

using namespace std;

double cal_perimeter(double r)
{
    return M_PI * r * 2;
}

double cal_area(double r)
{
    return M_PI * r * r;
}

int main(int argc, char const *argv[])
{
    const double PRICE_FENCE = 35; // 元/米
    const double PRICE_AISLE = 20; // 元/平方米
    const double WIDTH_AISLE = 3;  // 米

    double r_pool;
    printf("请输入游泳池半径（米）：");
    scanf("%lf", &r_pool);


    double r_out = r_pool + WIDTH_AISLE;

    double fee_fences = PRICE_FENCE * cal_perimeter(r_out);
    double fee_aisle = PRICE_AISLE * (cal_area(r_out) - cal_area(r_pool));

    printf("过道造价为 %.2f 元.\n", fee_aisle);
    printf("栅栏造价为 %.2f 元.\n", fee_fences);

    return 0;
}
