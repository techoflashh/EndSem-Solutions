#include<stdio.h>
#include<stdbool.h>


int COUNT=0;
bool check(char grid[4][4],int row,int coulumn,char e){
    for (int i=0;i<4;i++){
        if (grid[row][i]==e){
            return false;
        }
        if (grid[i][coulumn]==e){
            return false;
        }
        if (grid[2*(row/2) + i/2][2*(coulumn/2) + i%2]==e){
            return false;
        }
    }   
    return true;
}

bool solutions(char grid[4][4],char* arr){
    for (int row=0;row<4;row++){
        for (int col=0;col<4;col++){
            if (grid[row][col]=='*'){
                for (int i=0;i<4;i++){
                    if (check(grid,row,col,arr[i])){
                        grid[row][col]=arr[i];
                        bool temp = solutions(grid,arr);
                        if (temp==true){
                            return true;
                        }
                        else{
                            grid[row][col]='*';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main(){
    char grid[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            scanf(" %c",&grid[i][j]);
        }
    }
    char arr[4] = {'1','2','3','4'};
    if (solutions(grid,arr)){
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                printf("%c ",grid[i][j]);
            }
            printf("\n");
        }
    }else {
        printf("No Solutions Possible!\n");
    }
}