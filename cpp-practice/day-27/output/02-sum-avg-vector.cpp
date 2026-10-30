#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    int n;
    cin >> n;
    int sum = 0;

    if(n == 0){
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int nums;
        cin >> nums;

        vec.push_back(nums);

        sum += nums;
    }

    cout << "sum = " << sum << endl;
    cout << "avg = " << float(sum)/ n << endl;

    return 0;
}