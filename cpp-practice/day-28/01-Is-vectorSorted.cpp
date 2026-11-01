#include <iostream>
#include <vector>

using namespace std;

int main(){
        vector<int>vec;

        int n;
        cin >> n;

        bool isSorted = true;

        for(int i = 0; i < n; i++){
            int nums;
            cin >> nums;
            vec.push_back(nums);
        }

        for(int i = 0; i < n - 1; i++){

            if(vec[i] > vec[i + 1]){
                isSorted = false;
                break;
            }
        }

        if(isSorted){
            cout << "Sorted" << endl;
        }else{
            cout << "Not sorted" << endl;
        }
    return 0;
}