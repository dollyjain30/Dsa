#include<iostream>
using namespace std;
class Maxheap{
    int *arr;
    int size;
    int total_size;
    public:
    Maxheap(int n){
        arr= new int[n];
        size=0;
        total_size=n;
    }
    void insert(int value){
          if(size==total_size){
            cout<<"overflow"<<endl;
            return;
          }
          arr[size]=value;
          int index=size;
          size++;


   while(index >0 && arr[(index-1)/2] <arr[index]){
    swap(arr[index],arr[(index-1)/2]);
     index=(index-1)/2;
    }
    cout<<arr[index]<<" is inserted in the heap"<<endl;
    }
};
int main(){
     Maxheap h1(6);
     h1.insert(4);
      h1.insert(14);
       h1.insert(11);
    return 0;
}