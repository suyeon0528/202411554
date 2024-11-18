#include <stdio.h>
#include <math.h>  

double standard_deviation(double data[], int n) {
    double sum = 0.0;
    double mean;

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    mean = sum / n;

    double squared_diff_sum = 0.0;
    for (int i = 0; i < n; i++) {
        squared_diff_sum += pow(data[i] - mean, 2); 
    }

    double variance = squared_diff_sum / n;

    return sqrt(variance);
}

int main() {
    double data[5];
    int n = 5;

    printf("5개의 실수를 입력하세요: \n");
    for (int i = 0; i < n; i++) {
        printf("값 %d: ", i + 1);
        scanf("%lf", &data[i]); 
    }

    double result = standard_deviation(data, n);

    printf("입력된 데이터의 표준편차: %.2f\n", result);

    return 0;
}
