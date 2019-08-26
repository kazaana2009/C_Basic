#include <stdio.h>

int main() {
 /*  //배열자체를 가르키는 포인터
   int aar[3]={1,2,3}; //주소가 100번지라고 가정.

   int(*ptr_aar)[3]; //길이 3인 int형 배열을 가르키는 포인터를 선언!!


   ptr_aar=&aar; //aar의 배열을 가리키는 주소를 가르킨다. 즉 100번지를 가르킨다.

   for(int i=0;i<3;i++) {
       //
       printf("%d\n", (*ptr_aar)[i]);  //이해가 안된다면 공부하자 ㅡㅡ
       //*ptr_aar은 포인터를 선언한 주소의값을 가르킨다 즉 &aar 를 가리키는것
       //만약 ptr_aar이라고 하면 &aar을 저장한 주소값이 나옴.
   }*/

 int aar[2][3]={{1,2,3},{4,5,6}};

 int(*ptr)[3]=aar;
 //1.ptr[i]== aar[i];
 //2.ptr[i][j]==aar[i][j]
 //3.ptr==aar
 for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
         printf("%d ",ptr[i][j]);
     }
 }

}