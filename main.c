
#include <stdio.h>

/* 実数を整数部と小数部に分離する関数 */
void split_double(double d, int *int_part, double *frac_part)
{
    /* 整数部を取得する */
    *int_part = (int)d;

    /* 元の値から整数部を引いて小数部を取得する */
    *frac_part = d - *int_part;
}

int main(void)
{
    double val;
    int ipart;
    double fpart;

    /* double型の実数を入力する */
    scanf("%lf", &val);

    /* 整数部と小数部を取得する */
    split_double(val, &ipart, &fpart);

    /* 小数点以下4桁で表示する */
    printf("%d,%.4f", ipart, fpart);

    return 0;
}
