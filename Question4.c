#include <stdio.h>
#include <stdbool.h>

int COUNT = 0;
bool check(char grid[4][4], int row, int coulumn, char e)
{
    for (int i = 0; i < 4; i++)
    {
        if (grid[row][i] == e)
        {
            return false;
        }
        if (grid[i][coulumn] == e)
        {
            return false;
        }
        if (grid[2 * (row / 2) + i / 2][2 * (coulumn / 2) + i % 2] == e)
        {
            return false;
        }
    }
    return true;
}

void solutions(char grid[4][4], char *arr, int row, int col)
{
    if (row == 3 && col==3)
    {
        if (grid[3][3]=='*'){
            for (int i = 0; i < 4; i++)
            {
                if (check(grid,row,col,arr[i])){
                    COUNT++;
                    return;
                }
            }
        }
        else{
            COUNT++;
            return;
        }
    }
    if (row == 4){
        COUNT++;
        return;
    }
    else if (grid[row][col]=='*'){
        for (int i=0;i<4;i++){
            if (check(grid,row,col,arr[i])){
                grid[row][col] = arr[i];
                if (col == 3){
                    solutions(grid,arr,row+1,0);
                }else{
                    solutions(grid,arr,row,col+1);
                }
                grid[row][col] = '*';
            }
        }
    }
    else{
        if (col==3){
            solutions(grid,arr,row+1,0);
        }else{
            solutions(grid,arr,row,col+1);
        }
            
    }
}
int main()
{
    char grid[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf(" %c", &grid[i][j]);
        }
    }
    char arr[4] = {'1', '2', '3', '4'};
    solutions(grid,arr,0,0);
    printf("%d\n",COUNT);
}