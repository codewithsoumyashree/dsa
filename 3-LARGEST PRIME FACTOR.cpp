#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
unsigned int tests;
std::cin>>tests;
while(tests--)
{
    unsigned long long x;
    std::cin>>x;
    for(unsigned long long factor=2;factor*factor<=x;factor++)
    while (x%factor==0&&x!=factor) {
        x/=factor;
    }
    std::cout<<x<<std::endl;
}
    return 0;
}