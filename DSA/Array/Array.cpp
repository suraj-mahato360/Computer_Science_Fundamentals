#include<iostream>

using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(){
            size = 10;
            A = new int[10];
            length = 0; 
        }
        Array(int sz){
            size = sz;
            A = new int[size];
            length = 0;
        }
        ~Array(){
            delete []A;
        }
        void Display();
        void Insert(int index, int x);
        int Delete(int index);
        void Append(int x);
        int LinearSearch(int key);
        int BinarySearch(int key);
        int Get(int index);
        void Set(int index, int z);
        int Max();
        int Min();
        int Sum();
        void Reverse();
        int IsSorted();  
};

void Array::Display(){
    for(int i=0; i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array::Insert(int index, int x){
    if(index>=0 && index<=length){
        for(int i = length-1;i>=index;i--){
            A[i+1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    int x=0;
    if(index>=0 && index<length){
        x=A[index];
        for(int i=index;i<length-1;i++)
            A[i]=A[i+1];
        length--;
    }
    return x;
}

void Array::Append(int x){
    if(length<size){
        A[length++] = x;
    }
}

int Array::LinearSearch(int key){
    for(int i=0;i<length;i++){
    if(key==A[i]){
      return i;
      }
  }
  return -1;
}

int Array::BinarySearch(int key){
    int l,h,m;
  l=0;
  h=length-1;

  while(l<=h){
    m = (l+h)/2;
    if(key==A[m]){
      return m;
    }
    else if(key<A[m])
      h=m-1;
    else
      l=m+1;
  }
  return -1;
}



int main()
{

    cout << "Hello World!";

    return 0;
}