#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");//ȡ���ļ����������
    ofstream fout("output.txt");

    streambuf * cinbackup = cin.rdbuf(fin.rdbuf());//�ض����׼������������������������
    streambuf * coutbackup = cout.rdbuf(fout.rdbuf());

    string s;
    getline(cin,s); //���ļ��� ��ȡ  һ��

    cout<< s<<endl;//�ɹ� ��� �� �ļ�  ��

    cin.rdbuf(cinbackup);//��ԭ  ��  ��׼  �� ���� ��� ��
    cout.rdbuf(coutbackup);


    cout << "Hello world!" << endl;// �� ���� ̨ ���
    return 0;
}
