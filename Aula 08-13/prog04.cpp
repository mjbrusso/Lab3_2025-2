#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(float a, float b){
    return a>b;
}

int main()
{
    vector<float> vet{1.5, 66.0, 12.5,
                      100, 41.1, 8.9};

    sort(vet.begin(), vet.end(), cmp);

    for (auto n : vet)
        cout << n << " ";

    cout << endl;
}

