#include <stdio.h>
#include "my_mat.h"
int main() {

    int flag = 1;
    while (flag){
        char input;
        scanf("%c", &input);
        if(input == 'A'){
            createMatrix();

        }
        else if(input == 'B'){
            int i;
            int j;
            scanf("%d", &i);
            scanf("%d", &j);
            isThereAPath( i, j);
        }
        else if(input == 'C'){
            int i;
            int j;
            scanf("%d", &i);
            scanf("%d", &j);
            sizeOfPath(i, j);
        }
        else if(input == 'D'){
            flag = 0;

        }
    }
    return 0;
}
