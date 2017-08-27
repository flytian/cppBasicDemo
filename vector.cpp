#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<int>& vec);
void traversalVector(vector<int>& vec);
void scanVector(vector<int>& vec);

int main()
{
    /*

    ifstream fin("input.txt");//取得文件输入输出流

    streambuf * cinbackup = cin.rdbuf(fin.rdbuf());//重定向标准输入输出流并备份输入输出流

    string s;
    getline(cin,s); //从文件中 读取  一行

    cout<< s<<endl;//成功 输出 到 文件  中*/


    int myints[]  = {16,2,77,29};
    //用数组定义vector
    std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
    std::cout << "The contents of fifth are:";
    printVector(fifth);


    //其他定义 vector的方法
    std::vector<int> first;                                // empty vector of ints
    std::vector<int> second (4,100);                       // four ints with value 100
    std::vector<int> third (second.begin(),second.end());  // iterating through second
    std::vector<int> fourth (third);                       // a copy of third

    // 7 ints with a value of 100
    first.assign(7,100);
    printVector(first);

    //Resizes the container so that it contains n elements.
    second.resize(7,2);
    second.resize(9);
    traversalVector(second);
    //output the last element reference of second;
    cout<< second.back() <<endl;

    cout<< *second.end() <<endl;
     //output the first element  of second by iterator;
    cout<< *second.begin()<<endl;

    //Returns the size of the storage space currently allocated for the vector
    cout << first.capacity() <<" "<< second.capacity() <<" "<<third.capacity() <<" "<<fourth.capacity() <<endl;

     std::vector<int> sixth(9);
     sixth.resize(12);//会按一定的规则 变化，变成 了 18
    cout << sixth.capacity() <<endl;

    sixth.push_back(2);//放到 第 13个位置
    sixth.at(6)=7; // 第7 个 元素 置 为7
    sixth.at(3)=4;
    traversalVector(sixth);
    scanVector(sixth);
    //Removes all elements from the vector
    sixth.clear();// size 改变，capacity 不变
    cout<<sixth.size()<<" "<<sixth.capacity() <<" "<<endl;


    return 0;
}

void printVector(vector<int>& vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
}

void traversalVector(vector<int>& vec)
{
    for(int i=0 ; i<vec.size(); ++i)
    {
        std::cout<<' '<<vec[i];
    }
    std::cout<< endl;
}
//逆序 打印
void scanVector(vector<int>& vec)
{
    while (!vec.empty())//判断 是 否 为 空
  {
     cout << vec.back() <<" ";
     vec.pop_back();
  }
    std::cout<< endl;
}

void initVctor(vector<int>& vec)
{
    // assign some values:  0 ~ length-1
    for (unsigned i=0; i<vec.size(); i++)
        vec.at(i)=i;//改变 指定 位置 的 元素 的 值
}

void setVector(vector<int>& vec)
{
    // set some initial content:
    for (int i=1; i<10; i++)
        vec.push_back(i);

}
