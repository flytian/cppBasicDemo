#include <iostream>
#include <queue>
#include <set>


using namespace std;
// 函数声明 必须放在 using 下面。
#define  MAX_N 100
int heap[MAX_N] , sz = 0;

void push(int x);
int pop();

int main(){

    push(3);
    push(9);
    push(5);
    push(2);
    push(1);
    push(6);
    
    while(sz != 0)
    {
        cout<< pop() <<"\t";
    }
    cout << endl;
    return 0;

}

void push(int x)
{
    int i = sz++; //当前待 插 入 节点 所在 下标
    while (i>0) {
        int p = (i-1) / 2; // 当前节点 的 父节点

        if(heap[p] <= x) break; // 大小比父节点大， 正合适

        heap[i] = heap[p];// 大小比父节点小，则将 父 节点拉下来 放在 当前 节点 位置
        i = p; // 当前待 插 入 节点 所在 下标 改成 父节点 下标
    }

    heap[i] = x; // 等 循环 结束 时， 已经 调整 好  待 插 入 节点位置，则 插入待 插 值 x
}

int pop() {
    int ret = heap[0]; // 堆 的 最小值

    int x = heap[--sz]; // 堆 的 最后 一个 元素， 将此 元素 提到 堆 的 根节点处

    int i = 0; //从根 开始 向下 交换

    while( i*2 + 1 < sz) {// 目前， 堆 元素 总个数 为 sz
        int a = i * 2 +1, b = i * 2 + 2; // 左儿子，右儿子
        if( b < sz && heap[b] < heap[a])  a = b; // 右儿子 <  左儿子; 保证左 儿子 较小
        if( heap[a] >= x )  break; // 该值  已经 小于 儿子
        heap[i] = heap[a] ; // 否则，把  儿子 的 值 提 上 来
        i = a; //  待 插 入 节点位置 变成 儿子 所 在 位置
    }
    heap[i] = x;
    return ret;
}

