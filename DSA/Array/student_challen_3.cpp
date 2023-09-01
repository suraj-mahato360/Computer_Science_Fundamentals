//Find multiple missing element in unsorted Array

#include<iostream>
using namespace std;

int main(){
    int A[10] = {3,5,7,2,4,1,9,11};
    int H[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        H[A[i]]++;
    }
    for(int i=0;i<12;i++){
        if(H[i]==0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}
