//Find multiple missing element in sorted Array

#include<iostream>
using namespace std;

int main(){
    int A[10] = {5,6,8,9,10,11,12,13,14,17};
    int diff = A[0];
    for(int i=0;i<10;i++){
        if(A[i]-1 != diff){
            while(diff<A[i]-i){
                cout<<i+diff++<<endl;
            }
        }
    }
    return 0;
}
