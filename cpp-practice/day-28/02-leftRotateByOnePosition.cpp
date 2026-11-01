#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int nums;
        cin >> nums;
        vec.push_back(nums);
    }
    if(n == 0){
        return 0;
    }
    
    int i = 0;
    int j = i + 1;
    
    while(j < n){
        int temp = vec[j];
        vec[j] = vec[i];
        vec[i] = temp;
        
        i++;
        j++;
    }
    
    for(int val : vec){
        cout << val << " ";
    }
    return 0;
}