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

using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;


int main(){
    string AX;
    while(getline(cin,AX)){
        for(int i=0;i<AX.size();i++){
            if(AX[i]>='A'&&AX[i]<='Z'){
                AX[i]+=32;
            }
        }
        cout<<AX<<endl;
    }

    system("pause");
    return 0;
}
