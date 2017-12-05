#include<stdlib.h>
#include<stdio.h>
void ShiftRows(int arry[4][4]){

        int temp1,temp2,temp3,temp4;
       /* for(int i=1;i<4;i++){

                    if(j>1){

                temp1=arry[i][0];
                temp2=arry[i][1];
                temp3=arry[i][2];
                temp4=arry[i][3];

                arry[i][]


                }
                */
                temp1=arry[1][0];
                arry[1][0]=arry[1][1];
                arry[1][1]=arry[1][2];
                arry[1][2]=arry[1][3];
                arry[1][3]=temp1;

                temp1=arry[2][1];
                arry[2][1]=arry[2][3];
                temp2=arry[2][0];
                arry[2][0]=arry[2][2];
                arry[2][3]=temp1;
                arry[2][2]=temp2;

                temp1=arry[3][0];
                arry[3][0]=arry[3][3];
                temp2=arry[3][1];
                arry[3][1]=temp1;
                temp3=arry[3][2];
                arry[3][2]=temp2;
                arry[3][3]=temp3;

    }




void main(){
    //int *State= (int*) malloc(16*sizeof(int));
    int State[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("Enter element in state at position [%d][%d]",i,j);
                scanf("%d",&State[i][j]);

        }
    }
    printf("State provided by User ");
    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("[%d] ",State[i][j]);


        }
        printf("\n");
    }


    ShiftRows(State);

    printf("State after ShiftRows ");
    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("[%d] ",State[i][j]);


        }
        printf("\n");
    }










}
