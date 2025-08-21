#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> nums;
    
    cout << "Size: " << nums.size() << endl;
    nums.push_back(10);
    nums.push_back(33);
    nums.push_back(55);
    nums.push_front(800);

    nums.insert(nums.begin(), 1200); // mesmo que push_front
    
    // nums.remove(33);  // remove todas as ocorrências do valor 33
    // nums.pop_front(); // remove o primeiro
    // nums.pop_back(); // remove o último
    // nums.erase(nums.begin()); // o mesmo que pop_front

    nums.sort(); // Ordena

    for(auto n: nums){
        cout << n << endl;
    }
}
