#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main()
{
    map<const char*, const char*> mp;
    map<const char*, const char*>::iterator iter;
    const char key[3][20] = {"img", "system", "ip"};
    const char value[3][20] = {"d:/a.img", "win7", "193.68.6.3"};

    for (int i = 0; i < 2; i++){
        mp.insert(make_pair(key[i], value[i]));
    }
    mp.insert(pair<const char*, const char*>(key[2], value[2]));

    mp["addr"] = "China";

    for (iter = mp.begin(); iter != mp.end(); iter++) {
        cout << iter->first << "\t" << iter->second << endl;
    }

    //return 0;
}

