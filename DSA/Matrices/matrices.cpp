#include<iostream>
using namespace std;

struct Matrix{
    int A[10];
    int n;
};

void Set(Matrix *m,int i,int j,int x){
    if(i==j){
        m->A[i-1]=x;
    }
}

int Get(Matrix m, int i, int j){
    if(i==j){
        return m.A[i-1];
    }
    else{
        return 0;
    }
}

void Display(Matrix m){
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++){
            if(i==j){
                printf("%d ",m.A[i]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    Matrix m;
    m.n=4;
    Set(&m,1,1,5);Set(&m,2,2,5);Set(&m,3,3,5);Set(&m,4,4,5);
    printf("%d \n", Get(m,3,3));
    Display(m);
    return 0;
}