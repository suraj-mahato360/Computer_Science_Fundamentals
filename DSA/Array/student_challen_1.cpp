//Find the missing element in sorted Array

#include<iostream>
using namespace std;

int main(){
    int A[10] = {1,2,3,4,5,6,8,9,10};
    int sum_ac_lat = A[8]*(A[8]+1)/2;
    int sum_org = 0;
    // cout<<sum_ac_lat;
    for(int i=0;i<10;i++){
        sum_org += A[i];
    }
    // cout<<sum_org;
    int ans = sum_ac_lat - sum_org;
    cout<<ans;
    return 0;
}

// Another Approach is comparing difference of elements in array