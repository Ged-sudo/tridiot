#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define _weights 3
#define EPOCH 5000
#define LR 0.1
#define EXPER 4
#define countData 10

double w[_weights];

double activate(double a) {
    return (a <= 0) ? 0 : 1;
}


double rProp(double inputs[countData]) {
    double res = 0;
    
    for (int i = 0; i < countData; i++) {
        res += w[i] * inputs[i];
    }
    
    return res;
}

void train(int data[EXPER][countData], int exp[EXPER]) {
    int d, i, n;
    double error;
    
    for (int i = 0; i < EPOCH; i++) {
        for (int d = 0; d < EXPER; d++) {
            error = exp[d] - activate(rProp((double*)data[d]));
            
            for (n = 0; n < _weights; n++) {
                w[n] += LR * error * data[d][n];
            }
        }
    }
}

int main(int argc, const char * argv[]) {

    int trainData[EXPER][countData] = {
        {20, 23, 25, 24, 26, 22, 23, 27, 23, 22},
        {20, 21, 22, 24, 26, 22, 23, 21, 20, 19},
        {20, 19, 16, 18, 15, 19, 18, 17, 16, 21},
        {20, 23, 25, 24, 26, 22, 23, 27, 23, 22}
    },
    expresults[EXPER] = {1, 1, 0}, i;
    srand(1);
    for (i = 0; i < _weights; i++) {
        w[i] = fmod(rand()%100000000 * 0.1, 1.05);
    }
    train(trainData, expresults);
    double new[countData] = {20, 23, 25, 24, 26, 22, 23, 27, 23, 22};
    printf("%.1f\n", activate(rProp(new)));
    return 0;
}
