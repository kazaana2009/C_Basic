//재귀함수
#include <stdio.h>

void rec(int n){
    if(n>5)
        return;;
    printf("n= %d\n",n);
    rec(n+1);  //자기 자신을 호출한다.
}

int main(){
    rec(1); //1이 증가하는 무한반복인 프로세스가 만들어짐.
}


