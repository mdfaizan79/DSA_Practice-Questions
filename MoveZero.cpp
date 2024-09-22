#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int movezeros(vector<int> &arr ){
    int j=-1;
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    int temp;
    for(int i=j+1;i<n;i++){
        if(arr[i]!= 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }


}

int main(){
    vector<int> arr ={1,0,3,4,0,4,0};
    int ans = movezeros(arr);
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
    }