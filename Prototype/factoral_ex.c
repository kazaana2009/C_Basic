//
// Created by Jae hyak Choi on 26/08/2019.
//
//재귀함수를 이용한 팩토리얼 구하기
#include <stdio.h>
int fac(int n){
    if(n==1)
        return 1;


    return *fac(n-1);
}
int main(){
    printf("%d\n",fac(10));
}
