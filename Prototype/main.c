#include <stdio.h>
//프로토타입(prototype) :원형 시제품
//Ex) 걷기 기능
void work(int);
void rotate(int);
void drawSqure();
int main() {
drawSqure();

}
void work(int distance){
    printf("%d 를 걸었습니다.\n",distance);
}
// 돌기 기능
void rotate(int angle){
    printf("%d 를 회전했습니다.\n",angle);
}
void drawSqure(){
    for(int i=0;i<=4;i++){
        work(10);
        rotate(90);
    }
}