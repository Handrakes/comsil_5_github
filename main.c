#include "header.h"

int main()
{
	int n; //테스트 케이스의 개수
	scanf("%d", &n);
	int **string = malloc(sizeof(int*)*n); //2차원 배열을 동적할당
	for(int i=0;i<n;i++){
		string[i]=malloc(sizeof(int)*10);
	}

	for(int i=0;i<n;i++){ 
		for(int j=0;j<10;j++)
			string[i][j] = 0; //모든항을 0으로 초기화
	}

	int k; 
	for(int i=0;i<n;i++){
		k=0;
		getchar();
		scanf("%d",&k);//테스트 숫자를 받음
		Count(k,string,i);//숫자를 세어서 배열에 넣어줌
	}
	Print(n,string);//완성된 2차원 배열을 출력함
	return 0;
}
