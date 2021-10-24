#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define <test.h>
#define max_sum 1000000007

int main(void)
{
    char trash = '0';
    long long int = 1000;
    unsigned long long count_inp, number, out_summ;
    double base;
    for (scanf("%llu", &count_inp); count_inp > 0; count_inp--) {
        out_summ = 0;
        scanf("%lf %llu", &base, &number);
        for (unsigned long long i = 0; i < 32; i++) {
            if (number & (1 << i)) {
                out_summ += pow(base, i);
                for (;out_summ >= max_sum;) {
                    out_summ -= max_sum;
                }
            }
        }
        printf("%llu\n", out_summ);

    }
    return 0;
}
