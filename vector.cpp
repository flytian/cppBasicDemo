#include <iostream>
#include <vector>

using namespace std;
void printVector(vector<int>& vec);
void traversalVector(vector<int>& vec);
void scanVector(vector<int>& vec);

int main()
{
    /*

    ifstream fin("input.txt");//ȡ���ļ����������

    streambuf * cinbackup = cin.rdbuf(fin.rdbuf());//�ض����׼������������������������

    string s;
    getline(cin,s); //���ļ��� ��ȡ  һ��

    cout<< s<<endl;//�ɹ� ��� �� �ļ�  ��*/


    int myints[]  = {16,2,77,29};
    //�����鶨��vector
    std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
    std::cout << "The contents of fifth are:";
    printVector(fifth);


    //�������� vector�ķ���
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
     sixth.resize(12);//�ᰴһ���Ĺ��� �仯����� �� 18
    cout << sixth.capacity() <<endl;

    sixth.push_back(2);//�ŵ� �� 13��λ��
    sixth.at(6)=7; // ��7 �� Ԫ�� �� Ϊ7
    sixth.at(3)=4;
    traversalVector(sixth);
    scanVector(sixth);
    //Removes all elements from the vector
    sixth.clear();// size �ı䣬capacity ����
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
//���� ��ӡ
void scanVector(vector<int>& vec)
{
    while (!vec.empty())//�ж� �� �� Ϊ ��
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
        vec.at(i)=i;//�ı� ָ�� λ�� �� Ԫ�� �� ֵ
}

void setVector(vector<int>& vec)
{
    // set some initial content:
    for (int i=1; i<10; i++)
        vec.push_back(i);

}
