#include<stdio.h>
#define M 3
#define N 2
#define K 3



int main(){

int a[M][N] = {
		{2,3},
		{1,2},
		{2,8}
	      };
int b[N][K] = {
		{1,2,1},
		{3,5,2}
	      };
int c[M][K];

int x,y,z;

for(x=0;x<M;x++){
	for(y=0;y<K;y++){
			c[x][y] = 0;
			for(z=0;z<N;z++)
			c[x][y] += a[x][z]*b[z][y];
			}
		}

for(x=0;x<M;x++){
	printf("\n");
	for(y=0;y<K;y++)
		printf("%d ",c[x][y]);
}
printf("\n--------------\n");
return 0;
}
