#include <new>
#include <iostream>
using namespace std;

int main()
{
    try
    {
        //int* a = new int[0xfffffffff];  // bad allocation
        //int* a = new int[0x1ffffffff];  // 
        int* a = new int[0xffffffff];  // ??¢¥? ?? ?¨ú¡¤?
        delete[] a;
        cout << "?¨ú¡¤?\n";
    }
    catch (bad_alloc ex)
    {
        cout << ex.what() << '\n';
    }

    return 0;
}