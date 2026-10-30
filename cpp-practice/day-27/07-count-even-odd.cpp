#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int nums;
        cin >> nums;
        vec.push_back(nums);
    }
    
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if(vec[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;


    return 0;
}