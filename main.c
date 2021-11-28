#include <stdio.h>
#include "my_mat.h"
int main() {
    int mat[10][10];
    int flag = 1;
    while (flag){
        char input;
        scanf("%c", &input);
        if(input == 'A'){
            createMatrix(mat);
        }
        else if(input == 'B'){
            int i;
            int j;
            scanf("%d", &i);
            scanf("%d", &j);
            isThereAPath(mat, i, j);
        }
        else if(input == 'C'){
            int i;
            int j;
            scanf("%d", &i);
            scanf("%d", &j);
            sizeOfPath(mat, i, j);
        }
        else if(input == 'D'){
            flag = 0;

        }else{
            printf("Invalid input. please insert A, B, C or D");
        }
    }
    return 0;
}
