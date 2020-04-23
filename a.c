#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int func_sequential(int* arr,int k,int n)
{
	for(int i=0;i<n;i++){
		if( arr[i] == k)
			return i+1;
		else
			continue;
	}
	return -1;
}

void main()
{
	int n; //배열의 길이
	int k; //찾고자 하는 데이터
	int *arr; // 데이터배열 포인터 선언
	
	printf("Length : ");
	scanf("%d", &n); // 배열의 길이 입력
	
	arr=(int*)malloc(sizeof(int)*n); // 데이터의 동적 할당	

	int a=1;
	for(int i=0;i<n;i++){
		arr[i] = a; //배열 생성
		a++;
	}
	
	printf("Search number : ");
	scanf("%d", &k); // 찾고자하는 값 입력
	
	int result;
	clock_t start = clock();
	result = func_sequential(arr,k,n);
	clock_t finish = clock();
	
	printf("Input: %d\n", n);
	printf("Search number: %d\n", k);
	printf("Searched : %d\n", result);
	printf("Time : %lf\n",(double)(finish - start)/CLOCKS_PER_SEC);
}
