#include <stdio.h>

double watts_para_kw(double watts) {
    return watts / 1000.0;
}

double kw_para_cv(double kw) {
    return kw * 1.34102; // 1 kW = 1.34102 cv
}
