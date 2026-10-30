#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;
    int n;
    cin >> n;

    for(int i = 0; i < n ; i++){
        int nums;
        cin >> nums;
        vec.push_back(nums);
    }
    for(int val : vec){
        cout << val << " ";
    }
    
    return 0;
}