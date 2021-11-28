//
// Created by itamarq on 28/11/2021.
//
#include <stdio_ext.h>
int mat[10][10];

void createMatrix() {
    int toInsert;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &toInsert);
            mat[i][j] = toInsert;
        }
    }
    for (int i = 0; i < 10 ; ++i) {
        mat[i][i] =0;
    }
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                int pathItoK = mat[i][k];
                int pathKtoJ = mat[k][j];
                if (pathItoK != 0 && pathKtoJ != 0) {
                    if (mat[i][j] == 0 || pathItoK + pathKtoJ < mat[i][j]) {
                        mat[i][j] = pathItoK + pathKtoJ;
                    }
                }
            }
        }
    }
}

void isThereAPath(int i, int j){
    int path = mat[i][j];
    if(path != 0){
        printf("True\n");
    }else{
        printf("False\n");

    }
}

void sizeOfPath(int i, int j){
    int pathSize = mat[i][j];
    if(pathSize == 0){
        int noPath = -1;
        printf("%d\n", noPath);
    }else{
        printf("%d\n", pathSize);
    }

}
