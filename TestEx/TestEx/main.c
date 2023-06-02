#include <stdio.h>

int main(int argc, const char * argv[]) {
    char inputNameSymb[20][20];
    int countNames = 2;
    int countSymbols = 11;
    char symbol; // 65 - 122
    
//    for (int i = 0; i < countNames; i++) {
//        printf("Input #%d name: ", i+1);
//        int j = 0;
//        while ((((int) symbol )> 64) && (122 < ((int) symbol))) {
//            scanf("%c ", inputNameSymb[i][j]);
//            j++;
//        }
//    }
    for (int i = 0; i < countNames; i ++) {
        int j = 0;
        for (char a = 'A'; a < 'z'; a++) {
            scanf("%c ", &inputNameSymb[i][j]);
            j++;
        }
    }
//    scanf("%c ", &symbol);
//    while (((int)symbol)) {
//        scanf("%c ", &symbol);
//    }
    
    for (int i = 0; i < countNames; i++) {
        printf("%s \n", inputNameSymb[i]);
    }
//    printf("%d \n", (int) symbol);
    
    return 0;
}
