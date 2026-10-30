#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;

    int n;
    cin >> n;

    bool found = false;

    for(int i = 0; i < n; i++){
        int nums;
        cin >> nums;
        vec.push_back(nums);
    }
    if(n == 0){
        return 0;
    }

    int largest = vec[0];
    for(int i = 0; i < n; i++){
        if(vec[i] > largest){
            largest = vec[i];
        }
    }
    
    int secLargest = vec[0];

    for(int i = 0; i < n; i++){
        if(vec[i] < largest){
            if(!found || vec[i] > secLargest){
                secLargest = vec[i];
                found = true;
            }
        }
    }
    if(found){
        cout << "Second largest:" << secLargest << endl;
    }else{
        cout << "Second largest does not exist." << endl;
    }

    return 0;
}