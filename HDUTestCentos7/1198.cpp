#include <cstdio>
#include <cstdlib>
#include <cstring>
int	a_kmap[11][3][3] = {
	{	{'#',' ','#',},{' ',' ','#',},{'#','#','#' }	},	//A
	{	{'#',' ','#',},{'#',' ',' ',},{'#','#','#' }	},	//B
	{	{'#','#','#',},{' ',' ','#',},{'#',' ','#' }	},	//C
	{	{'#','#','#',},{'#',' ',' ',},{'#',' ','#' }	},	//D
	{	{'#',' ','#',},{'#',' ','#',},{'#',' ','#' }	},  //E
	{	{'#','#','#',},{' ',' ',' ',},{'#','#','#' }	},	//F
	{	{'#',' ','#',},{' ',' ',' ',},{'#','#','#' }	},	//G
	{	{'#',' ','#',},{' ',' ','#',},{'#',' ','#' }	},	//H
	{	{'#','#','#',},{' ',' ',' ',},{'#',' ','#' }	},	//I
	{	{'#',' ','#',},{'#',' ',' ',},{'#',' ','#' }	},	//J
	{	{'#',' ','#',},{' ',' ',' ',},{'#',' ','#' }	}	//K
};
int move[4][2]={
	{ -1,0 },
	{ 0,1 },
	{ 1,0 },
	{ 0,-1 }
};
int M,N;	//M lines,N cols
char maze[200][200];
char isvisited[200][200];
void DFS(int x,int y);
int main(void)
{
	int i,j;	//指令的坐标
	int mazei,mazej;	//迷宫中对于指令坐标的映射
	char dir;
	int count;	//灌溉点数目
	// for(int n=0;n<11;n++)
	// {
	// 	printf("---%c---\n",'A'+n);
	// 	for(int i=0;i<3;i++)
	// 	{
	// 		for(int j=0;j<3;j++)
	// 			printf("%c",a_kmap[n][i][j]);
	// 		printf("\n");
	// 	}
	// }
	while(scanf("%d %d",&M,&N)&&(M+N!=-2))
	{
		getchar();	//吸收回车
		count=0;
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				dir = getchar();
				//将指令对应的迷宫映射到总迷宫中
				for(mazei=0;mazei<3;mazei++)
				{
					for(mazej=0;mazej<3;mazej++)
					{
						maze[i*3+mazei][j*3+mazej] = a_kmap[dir-'A'][mazei][mazej];
					}
				}
			}
			getchar();	//吸收回车
		}
		// print total maze
		// printf("The Real Maze is as follow\n");
		for(i=0;i<3*M;i++)
		{
			for(j=0;j<3*N;j++)
			{
                isvisited[i][j]=0;
				// putchar(maze[i][j]);
			}
			// putchar('\n');
		}
		for(i=0;i<3*M;i++)
		{
			for(j=0;j<3*N;j++)
			{
				if(maze[i][j]==' '&&!isvisited[i][j])
				{
					count++;
					DFS(i,j);
				}
			}
		}
		// printf("The count is:%d\n",count);
        printf("%d\n",count);
	}
	
}
void DFS(int x,int y)
{
	isvisited[x][y] = 1;
	for(int i=0;i<4;i++)
	{
		int xmoveto = x+move[i][0];
		int ymoveto = y+move[i][1];
		if(xmoveto>=0&&xmoveto<3*M&&ymoveto>=0&&ymoveto<3*N&&maze[xmoveto][ymoveto]==' '&&(!isvisited[xmoveto][ymoveto]))
		{
			DFS(xmoveto,ymoveto);
		}
	}
}

