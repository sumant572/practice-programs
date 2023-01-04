//#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int num[]={3,-4,-5};
    transform(num,num+5,num,negate<int>());
    for(int i=0;i<3;i++)
        cout << num[i] << " ";
}
