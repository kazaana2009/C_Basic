#include <stdio.h>

int main() {

    //예제 1
    FILE *in ,*out; //스트림 파일을 가르키는 포인터
    //Clion은 워킹 디렉토리 설정을 잡아줘야지 fopen 을 해줘야 한다.
    in =fopen("Input.txt","r");
    //mode 가 r일경우 읽기 W일경우 쓰기 !!
    //*주의 :만약 파일을 못찾으면 in은 0이 되버리며 NULL이 되버린다.


    out =fopen("Output.txt","w");//a<<--- append!!  w일경우 다 지워졌다가 새로써지게된다.

    int n;
    fscanf(in,"%d",&n); //in 이라는 파일 포인터에서 Scranf 를 받게되는것이다.
    fprintf(out,"%d",n); //in 이라는 파일 포인터에서 Scranf 를 받게되는것이다.

    //java의 스트림과 같이 파일 입출력을 실행하고 close를 해주는것이 좋다.
    fclose(in);
    fclose(out);

    //예제2
    in =fopen("main.c","w");
    char ch;
    while(!feof(in)){//파일을 끝까지 읽었을때 ture를 반환 아니면 false  반환
        fscanf(in,"%c",&ch);
        printf("%c",ch);
    }


}