#include <iosteam>
#include <stdio.h>
int main(){
    int a, b, c;
    int sum = 0;
    cin>> a >> b >>c;
    sum = a + b + c;
    int avg = sum/3;
    cout<<avg;
    return 0;
}