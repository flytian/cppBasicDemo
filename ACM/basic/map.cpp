#include <iostream>
#include <map>

using namespace std;
// 函数声明 必须放在 using 下面。
template <class Key, class T>
void printMap(map<Key,T> & m);

int main(){

    map<int, const char*> m;

    m.insert(make_pair(1, "ONE"));
    m.insert(make_pair(10, "TEN"));
    m[100] = "HUNDRED";

    map<int, const char*>::iterator ite;
    ite = m.find(1);
    cout<< ite->second <<endl;
    ite = m.find(2);
    if(ite == m.end())
    {
        cout << "not found"<<endl;
    }else{
        cout<< ite->second <<endl;
    }
    cout << m[10] <<endl;

    m.erase(10);

    printMap(m);
    return 0;

}

template <class Key, class T>
void printMap(map<Key,T> & m)
{
    //此处 必须 用 typename
    for(typename map<Key,T>::iterator ite = m.begin(); ite != m.end(); ++ite )
    {
        cout<< ite->first <<": " << ite->second <<"\t";
    }
    cout<<endl;
};

