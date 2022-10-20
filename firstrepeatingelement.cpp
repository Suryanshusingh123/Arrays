#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {3,4,5,6,7,8,9,6,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int temp[1000] = {-1};
    int index = n;
    for(int i=n-1;i>=0;i--){
        if(temp[arr[i]]==1){
            index = min(index,i);
        }
        else{
            temp[arr[i]]++;
        }
    }


    std::cout << index << std::endl;

    return 0;
}
/*Explanation:

We Want First Repeating Element. We can do simple search but takes O(N*N) time. We Have To Think Better Way. 
Okay What Sort An Array Within O(N) time ? Counting Sort !!!
Do Counting sort. Then Print out first element that repeat. But Then It Still Takes O( N * 2 ) time. 
It is Okay, But we need more perfect answer within O(N). Just Do Counting Sort in reverse manner. 
If We find some number repeating then update minIndex, as we are going to backwards, It will give smallest index i.e. 
First repeating element.*/