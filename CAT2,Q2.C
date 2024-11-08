//2d array.
//Author :Martin Nzioki Ngao.
//Registration No.CT101/G/22078/24
//Date:16/10/2024.
#include<stdio.h>
int main( ){
    int i,j;
    int scores[2][2]={{65,92},{84,72}};
    
    int scores2[2][2]={{35,70},{59,67}};
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
printf("scores[%d][%d] = %d\n",
i,j,scores[i][j]); 
    }
    }
for(i=0;i<2;i++){
 for(j=0;j<2;j++){
printf("scores[%d][%d] = %d \n",scores2[i][j]); 
    }
    }
return 0;
}