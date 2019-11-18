#include <stdio.h>
#define PI 3.14
#define SQUARE(x) ((x)*(x))

//다양한 전처리 기능
#define name "최재혁"
#define CHECK 1

int main() {
    //전처리기란 컴퓨터의 처리에 있어서 중심적인 처리를 수행하기위해 사전준비인 계산을 하는 프로그램
    //대표로 #include <stdio.h> 가있고
    //#define 이 있다.

    int x=10;
    printf("%2f\n",PI);
    printf("%d * %d = %d\n",x,x,SQUARE(10));

#if CHECK==1
    printf("%s",name);
#endif

 //굉장히 자주 쓰이는 전처리
#line 100 //행을 100값을주고
#ifdef DEBUG
    printf("line: %d\n",__LINE__);//라인이 추가될때마다 1씩증가가 된다.
    printf("line: %d\n",__LINE__);
    printf("line: %d\n",__LINE__);
#endif
}
