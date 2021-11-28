//
// Created by itamarq on 28/11/2021.
//
#include <stdio_ext.h>

int minNum(int i, int j){
    if(i<j){
        return i;
    }else{
        return j;
    }
}

int createMatrix(int mat[10][10]){
    int toInsert;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &toInsert);
            mat[i][j] = toInsert;
        }
    }
    for (int k = 0; k < 10; ++k) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                int currentPath = mat[i][j];
                int pathThroughK = mat[i][k] + mat[k][i];
                if(currentPath == 0 && pathThroughK == 0){
                    mat[i][j] = 0;
                }
                else if(currentPath == 0 && pathThroughK != 0){
                    mat[i][j] = pathThroughK ;
                }
                else if(currentPath != 0 && pathThroughK == 0){
                    mat[i][j] = currentPath;
                }else{
                    mat[i][j] = minNum(currentPath, pathThroughK);
                }
            }
        }
    }
    return 0;
}

int isThereAPath(int mat[10][10],int i, int j){
    int path = mat[i][j];
    if(path != 0){
        printf("True\n");
        return 1;
    }else{
        printf("False\n");
        return 0;
    }
}

int sizeOfPath(int mat[10][10], int i, int j){
    int pathSize = mat[i][j];
    if(pathSize == 0){
        int noPath = -1;
        printf("%d\n", noPath);
    }else{
        printf("%d\n", pathSize);
    }
    return 0;
}
