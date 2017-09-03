#include <iostream>
#include <queue>
#include <set>


using namespace std;
// 函数声明 必须放在 using 下面。
template<class T>
void printPriorityQueue(priority_queue<T>& pque);
template<class T>
void traversalPriorityQueue(priority_queue<T>& pque);
void printSet(set<int> & s);

int main(){
    //define a pque
    priority_queue<int> pque;

    // insert elements
    pque.push(3);
    pque.push(5);
    pque.push(1);
    printPriorityQueue(pque);

    pque.push(3);
    pque.push(5);
    pque.push(1);
    traversalPriorityQueue(pque);

    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);

    set<int>::iterator ite;

    ite = s.find(1);
    if(ite == s.end())
        cout<< "not found" <<endl;
    else
        cout<< "found" <<endl;

    ite = s.find(2);
    if(ite == s.end())
        cout<< "not found" <<endl;
    else
        cout<< "found" <<endl;

    s.erase(3);
    if(s.count(3) != 0)
        cout<< "found" <<endl;
    else
        cout<< "not found"<<endl;

    printSet(s);
    return 0;

}

template<class T>
void printPriorityQueue(priority_queue<T>& pque)
{
    while(!pque.empty())
    {
        cout<< pque.top() <<"\t" ;
        pque.pop();
    }
    cout<<endl;
}

template<class T>
void traversalPriorityQueue(priority_queue<T>& pque)
{
    while(pque.size() != 0)
    {
        cout<< pque.top() <<"\t" ;
        pque.pop();
    }
    cout<<endl;
}

void printSet(set<int> & s)
{
    for (set<int>::iterator ite = s.begin(); ite != s.end() ; ++ite )
    {
        cout<< *ite <<endl;
    }
}