#include <stdio.h>
//---------Printing Board Function--------------//
//----------------------------------------------//
void printing_board(char array[10][8]){
    for (int i=0;i<10;i++){
        for (int j=0;j<8;j++){
            if (j!=7){
            printf("%c |",' ');
        }}
        printf("\n");
        if (i!=9){
        printf(" ---------------------");
        printf("\n");}
    }

}
//----------------------------------------------//
int main(){
    char array[10][8];
    //call to printing board function
    printing_board(array);

}
