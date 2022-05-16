#include <bits/stdc++.h>

using namespace std;
 
void hello1(){
    cout << "Hello World" << endl;
}
 
void hello2(){
    cout << "Hello World" << endl;
}
 
int main(){
    thread t1(hello1);
    thread t2(hello2);
    t1.join();
    t2.join();
    return 0;
}
