#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    typedef map<int, string> MyMap;
    MyMap map;
    map.insert({1, "hello"});
    map.insert({3, "world"});
    map.insert({5, "Lenovo"});
    map.insert({7, "wonderful world"});
    map.insert({9, "CSW team"});
    cout << "welcome to cxx world.\n";
    for(auto m = map.begin(); m != map.end(); ++m )
        cout << m->first << '\t' << m->second << "\n";

    return 0;
}
