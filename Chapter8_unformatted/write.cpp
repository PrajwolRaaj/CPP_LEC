//write.cpp
//an example of function write()

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[] = "jay Shambooo, Jay Shiva";
    for (int i=1;i<=strlen(str); ++i)
    {
        cout.write(str, i);
        cout<<endl;

    }
    return 0;
}