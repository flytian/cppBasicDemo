#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");//取得文件输入输出流
    ofstream fout("output.txt");

    streambuf * cinbackup = cin.rdbuf(fin.rdbuf());//重定向标准输入输出流并备份输入输出流
    streambuf * coutbackup = cout.rdbuf(fout.rdbuf());

    string s;
    getline(cin,s); //从文件中 读取  一行

    cout<< s<<endl;//成功 输出 到 文件  中

    cin.rdbuf(cinbackup);//还原  成  标准  的 输入 输出 流
    cout.rdbuf(coutbackup);


    cout << "Hello world!" << endl;// 从 控制 台 输出
    return 0;
}
