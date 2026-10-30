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

    int target;
    cin >> target;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] == target){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}