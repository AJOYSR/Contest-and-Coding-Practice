#include <iostream>
#include <cstdio>
#include <algorithm>
#define  NODES 11

using namespace std;

int matriz[NODES][NODES];
int tmpMatriz[NODES][NODES];

void readMatrix(int tam)
{

    string tmp, data = "";

    for(int x=0; x<tam; x++)
    {
        cin>>tmp;
        data += tmp;
    }

    int index = 0;
    for(int x=0; x<tam; x++)
        for(int y=0; y<tam; y++)
            matriz[x][y] = data[index++] - '0';
}

void print(int tam)
{
    for(int x=0; x<tam; x++)
    {
        for(int y=0; y<tam; y++)
            printf("%d",matriz[x][y]);
        printf("\n");
    }
    printf("\n");
}

void addOne(int tam)
{
    for(int x=0; x<tam; x++)
        for(int y=0; y<tam; y++)
        {
            matriz[x][y]++;
            if(matriz[x][y] > 9)
               matriz[x][y] = 0;
        }
}

void restOne(int tam)
{
    for(int x=0; x<tam; x++)
        for(int y=0; y<tam; y++)
        {
            matriz[x][y]--;
            if(matriz[x][y] < 0)
               matriz[x][y] = 9;
        }
}

void transpose(int tam)
{
    for(int x=0; x<tam; x++)
        for(int y=0; y<tam; y++)
            tmpMatriz[y][x] = matriz[x][y];
    for(int x=0; x<tam; x++)
        for(int y=0; y<tam; y++)
            matriz[x][y] = tmpMatriz[x][y];
}

void swapRow(int r1, int r2, int tam)
{
    for(int x=0; x<tam; x++)
        swap(matriz[r1][x], matriz[r2][x]);
}

void swapCol(int r1, int r2, int tam)
{
    for(int x=0; x<tam; x++)
        swap(matriz[x][r1], matriz[x][r2]);
}

int main()
{
    int casos, tam, queries, r1, r2;
    string str;

    scanf("%d", &casos);
    for(int i=1; i<=casos; i++)
    {
        scanf("%d", &tam);
        readMatrix(tam);

        scanf("%d", &queries);
        for(int j=0; j<queries; j++)
        {
            cin>>str;
            if(str == "inc")
               addOne(tam);
            else if(str == "dec")
                    restOne(tam);
            else if(str == "transpose")
                    transpose(tam);
            else if(str == "row")
            {
                scanf("%d %d", &r1, &r2);
                swapRow(r1 - 1, r2 - 1, tam);
            }
            else if(str == "col")
            {
                scanf("%d %d", &r1, &r2);
                swapCol(r1 - 1, r2 - 1, tam);
            }
        }
        printf("Case #%d\n", i);
        print(tam);
    }
return 0;
}
