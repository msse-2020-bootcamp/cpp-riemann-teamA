#include <iostream>

double compute_integrand(double x) {
    double integrand = 1.0 / (1.0 + x * x);

    return integrand;

}

double compute_integral(double a, double b, int npoints) {
    double dx = (b - a) / npoints;

    double position = a + dx / 2.0;
    double sum = 0.0; 
    for (int i = 0; i < npoints; i++) {
        sum += dx * compute_integrand(position + i * dx);
    }

    return sum;
}

int main(void) {

    std::cout << 4.0 * compute_integral(0.0, 1.0, 190) << std::endl;
    return 0;
}