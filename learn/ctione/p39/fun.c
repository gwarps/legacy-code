#include "link.h"
//Bruteforce time
void bruteforce(int arr[],int n){

int vmax = arr[1];
int i,j,k,sum;
int start,end;

for(i=0;i<n;i++){

for(j=i;j<n;j++){

sum = 0;

for(k=i;k<j;k++){

sum = sum + arr[k];

if(sum>vmax){
vmax = sum;
start = i;
end = k;
}
}
}
}
printf("==================\n");
printf("Max Sum: %d\n",vmax);
printf("Start Index: %d\n",start);
printf("End Index: %d\n",end);
printf("==================\n");
}

//Quadratic time
void quad(int arr[],int n){
int i,j,sum=0;
int start,end,vmax;

vmax = arr[0];
for(i=0;i<n;i++){
sum = 0;
for(j=i;j<n;j++){
sum = sum + arr[j];

if(sum>vmax){
vmax = sum;
start = i;
end = j;
}
}
}
printf("==================\n");
printf("Max Sum: %d\n",vmax);
printf("Start Index: %d\n",start);
printf("End Index: %d\n",end);
printf("==================\n");
}

//Divide and conquer
int div(int arr[],int start,int end){
int mid,sum;
int maxLeft,maxRight,maxCross;
int maxA1,maxA2;
int i;

mid = (start+end)/2;
sum=0;
maxLeft=0;

for(i=mid;i>=start;i--){
sum = sum + arr[i];
maxLeft = (maxLeft>sum?maxLeft:sum);
}

sum=0;
maxRight=0;

for(i = mid+1;i<=end;i++){
sum = sum + arr[i];
maxRight = (maxRight>sum?maxRight:sum);
}

maxCross = maxLeft + maxRight;
maxA1 = div(arr[],start,mid);
}

/*
int div(int left,int right){

int mid,sum;
int maxLeft,maxRight,maxCross;
int maxA,maxB;
int i;

mid = (left+right)/2;
sum =0;
maxLeft = 0;

for(i = mid;i>=left;i--){
sum = sum + test[i];
maxLeft = (maxLeft>sum?maxLeft:sum);
}

sum = 0;
maxRight=0;
for(i=mid+1;i<=right;i++){
sum = sum + test[i];
maxRight = (maxRight>sum?maxRight:sum);
}

maxCross = maxLeft + maxRight;
maxA = div(left,mid);
maxB = div(mid+1,right);

return ((maxCross>maxA)?(maxCross>maxB?maxCross:maxB):(maxA>maxB?maxA:maxB));
}
*/
