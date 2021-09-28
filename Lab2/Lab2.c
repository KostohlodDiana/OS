#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input_mas (int N,double *a);
void print_mas (int N,double *a);
int task1 (int n,double *a);
double task2 (int n,double *a);

int main(){
	int n;
	printf("Enter the number of elements: n = ");
	scanf("%d",&n);
	double a[n];
	printf("\nEnter array: \n");
	input_mas (n,a);
	printf("Array: \n");
	print_mas (n,a);
	printf("\nTask1: %d\n",task1(n,a));
	printf("Task2: %lf",task2(n,a));
	return 0;
}

void input_mas (int n,double *a){
    int i;
    for (i=0;i<n;i++){
   		scanf("%lf",&a[i]);
	    }
	}

void print_mas (int n,double *a){
    int i;
    for (i=0;i<n;i++){
   		printf("%lf\t",*a);
   		a++;
	    }
	}

int task1 (int n,double *a){
	int i,s=0;
	double sum=0,m;
    for(i=0;i<n;i++){
		sum = sum + a[i];
	}
	m = sum/n;
	for(i=0;i<n;i++){
		if(a[i]>m) s++;
	}
	return s;
}

double task2 (int n,double *a){
	int i,index;
	double smod=0;
    for(i=0;i<n;i++){
		if(a[i]<0){
		index = i+1;
		break;	
		} 
	}
	for(i=index;i<n;i++){
        smod=smod+abs(a[i]);
	}
	return smod;
}

