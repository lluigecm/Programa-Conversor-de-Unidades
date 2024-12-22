#include <stdio.h>

double watts_para_kw(double watts) {
    return watts / 1000.0;
}

double kw_para_watts(double kw) {
    return kw * 1000.0;
}

double kw_para_cv(double kw) {
    return kw * 1.34102; // 1 kW = 1.34102 hp
}

double cv_para_kw(double cv) {
    return cv / 1.34102;
}

double watts_para_cv(double watts) {
    double kw = watts_para_kw(watts);
    return kw_para_cv(kw);
}

double cv_para_watts(double cv) {
    double kw = cv_para_kw(cv);
    return kw_para_watts(kw);
}