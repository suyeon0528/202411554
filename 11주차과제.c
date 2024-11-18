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

    printf("5���� �Ǽ��� �Է��ϼ���: \n");
    for (int i = 0; i < n; i++) {
        printf("�� %d: ", i + 1);
        scanf("%lf", &data[i]); 
    }

    double result = standard_deviation(data, n);

    printf("�Էµ� �������� ǥ������: %.2f\n", result);

    return 0;
}
