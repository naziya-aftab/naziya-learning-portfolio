#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>vec;

    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++){
        int nums;
        cin >> nums;
        
        vec.push_back(nums);
    }
    
    int largest = vec[0];
    for(int i = 0; i < n; i++){
        if(vec[i] > largest){
            largest = vec[i];
        }
    }

    cout << "largest: " << largest << endl;
    return 0;
}