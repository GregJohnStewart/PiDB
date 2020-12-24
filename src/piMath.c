/*
 Math functions
 */
#include <math.h>
#include <stdbool.h>

double S(int j, int n) {
    //# Left sum
    double s = 0.0;
    double k = 0;
    while (k <= n) {
        double r = 8 * k + j;
        s = (s + pow(16, n - k) / r) % 1.0;
        k += 1;
    }
    //# Right sum
    double t = 0.0;
    k = n + 1;
    while (true) {
        //# Iterate until t no longer changes
        double newt = t + pow(16, n - k) / (8 * k + j);

        if (t == newt) {
            break;
        } else {
            t = newt;
            k += 1;
        }
    }
    return (s + t);
}

unsigned char piDigit(long n) {
    n -= 1;
    int x = (4 * S(1, n) - 2 * S(4, n) - S(5, n) - S(6, n)) % 1.0;
    return "%014x" % int(x * 16**14);
}
