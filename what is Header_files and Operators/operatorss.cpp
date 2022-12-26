#include<iostream>
using namespace std;
int main(){
    cout<<"this operator gives new line by ending curent line"<<endl;   
//the following are arthmatic operators
    int a=4,b=5;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    // a++ will incr the value of a by +1 now new value of a is 5 from here
    cout<<"The value of a-- is "<<a--<<endl;
    //a-- will dcr the value of a by -1 now new value of a is 4 from here
    cout<<"The value of ++a is "<<++a<<endl;
    // as value of a was 4 after a-- now ++a will incr by 1 so output is 5 and new a
    cout<<"The value of --a is "<<--a<<endl;
//old value of a is 5 --a will dec by -1 so it will be 4
}
