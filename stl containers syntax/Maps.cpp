maps are used to map the key value pair to each other
syntax:
map<char ,int> mp;

#include<isotream>
#include<map>
using namespace std;
int main()
{
map <char,int> mp;
map<char,int> mymap,mymap1;

inserts elements individually in the map with the combination of the key value pair of the element

mp.insert(pair<int,char>('a',2));
mp.inset(pair<int,char>('b',1));

mp.inset(pair<int,char>('c',43));

mymap.insert(mp.begin(


return 0;
}

 
