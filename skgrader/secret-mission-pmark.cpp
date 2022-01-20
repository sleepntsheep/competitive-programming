#include <stdio.h>

bool aj[2000][2000];
int cost[2000][2000];

void printBoardAj(int sizeX, int sizeY)
{
    for(int i=0;i<=sizeY;i++)
    {
        for(int j=0;j<=sizeX;j++)
        {
            printf("%d ",aj[i][j]);
        }
        printf("\n");
    }
}
void printBoardCost(int sizeX, int sizeY)
{
    for(int i=0;i<=sizeY;i++)
    {
        for(int j=0;j<=sizeX;j++)
        {
            printf("%d ",cost[i][j]);
        }
        printf("\n");
    }
}

int min(int a, int b) {return a < b ? a : b;}

int costOf(int x, int y)
{
//    printf("-- %d,%d\n",x,y);
    if(aj[x][y]) return 2200000;
    if(cost[x][y] != 0) return cost[x][y];
    if(x==0 && y==0) return 0;
    if(x<=0) return cost[x][y] = costOf(x,y-1)+1;
    if(y<=0) return cost[x][y] = costOf(x-1,y)+1;
    return cost[x][y] = min(costOf(x-1,y)+1,costOf(x,y-1)+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        aj[a][b] = 1;
    }
    int a,b;
    scanf("%d%d",&a,&b);
    
    int m = costOf(a,b);
    printf("%d",m);
//    printBoardAj(a,b);
//    printBoardCost(a,b);
    
}
