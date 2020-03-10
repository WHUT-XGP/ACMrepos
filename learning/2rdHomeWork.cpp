#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

const int maxN = 110;
const int INF = 0x3f3f3f3f;
/*
˼·��
1.��˼�����ٸ����ӣ�
����n=5,p=2
R�� 1 2 3 4 5
ת����R':3 4 5 1 2
�±��л���0->3 2->4 3->1 4->2 5->3

2.������
ÿһ��Ķ�Ӧ�±�k����k<pʱ:k'=n-p+k ��k>=pʱ�� k'=k-p
3.������
����ֻ��Ҫ��ÿһ��ƶ�����Ӧ��λ�ü��ɣ�
���ƶ���ʱ�򣬵��ƶ�ĳ���Ӧ��λ�ú����Ͻ��ж�Ӧ����ƶ�
4.������
�ʿռ临�Ӷ�O��1��,ʱ�临�Ӷ�O��n)
*/

//Ѱ�Ҷ�Ӧ��λ��
int matchIndex(int index, int p, int n)
{
    return index < p ? n - p + index : index - p;
}
int R[maxN];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> R[i];
        }
        int p;
        cin >> p;
        //³���޸�P
        p=p%n;

        //��ʼ�������嵱ǰλ�ô�0��ʼ
        int currentIndex = 0;
        int currentNum = R[currentIndex];
        //����ÿһ����ƶ�
        for (int i = 0; i < n; i++)
        {
            //�õ���Ӧλ�õ��±��Լ�����
            int tempIndex = matchIndex(currentIndex, p, n);
            int tempNum = R[tempIndex];
            //�޸Ķ�Ӧλ�����ݣ�������Ӧλ���޸�Ϊ��ǰλ��
            R[tempIndex] = currentNum;
            currentIndex = tempIndex;
            currentNum = tempNum;
        }
        //�鿴���
        for (int i = 0; i < n; i++)
        {
            cout << R[i] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
