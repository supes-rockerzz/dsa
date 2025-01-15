#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<pair<int, int>, int> mpp;
    pair<int, int> k;
    k.first = -5;
    k.second = -10;
    mpp[k] = 55;
    k.first = -4;
    k.second = 10;
    mpp[k] = 46;
    for(auto i : mpp)
    {
        cout<<i.second<<" ";
    }
    return 0;
}