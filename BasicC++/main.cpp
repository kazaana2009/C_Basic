#include <iostream>
#include <string>
using namespace std;

void swap(int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    cout << "Hello, World!" << endl;

    //입출력
    int a,b;
    cin >> a>> b;
    cout << a <<"+" << b << "="<<a+b<<endl;


    //String 연습
    string name;
    cout << "이름입력 :" <<endl;
    cin >> name;
    //자바처럼 String 은 대문자 S로 시작하지 않는다.
    string message = "안녕하세요 "+ name +"님";
    cout<< message <<endl;

    int c(5),d(3);//선언을 이렇게 할수 있다.

    swap(a,b);

    cout << "a는 " << a << " b는 "<< b << endl;
    cout << "c는 " << c << " d는 "<< d << endl;

    //다음 배열을 출력해보시오
    int aar[2][3]={{1,5,7},{4,5,6}};

    //포인트배열
    int (*ln)[3] =aar;
    cout<< *(*ln) <<endl;
    cout<< *(*ln+1) <<endl;
    cout<< *(*ln+2) <<endl;

    for(int (*in)[3] =aar;in<aar+2;in++){
        for(int *col=*in ; col<*in+3;col++){
            cout << *col;
        }
        cout << endl;
    }

}