#include <iostream>
#include"myarray.h"
#include<windows.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    system("color 2");

    myarray<int>mine(10);
 
    iterate iter;
    iter = mine.egin();

    for (; iter != mine.endd();++iter)
    {
        *iter = *iter + 3;
    }

    iter = mine.egin();
    for (; iter != mine.endd();++iter)
    {
        cout << *iter << endl;
    }

}
