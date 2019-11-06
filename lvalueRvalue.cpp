#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 23;  //read and writ variable 
    const int y = 30; // read only variable
    x = 10;

    int arr1[1] = {1};
    for(int i=0;i < 10;i++){
        ///int& temp = 0;  ///cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int
        int& temp = arr1[0];   ///at every iteration arr[0] value is updated with current + 10
        temp += x;
        cout<<temp<<' '<<arr1[0]<<endl;
    }
/*
    const int arr2[1] = {1};
    for(int i=0;i < 10;i++){
        ///error: binding reference of type 'int&' to 'const int' discards qualifiers
        int& temp = arr2[0];
        temp += x;
        cout<<temp<<endl;
    }
*/
    return 0;
}
