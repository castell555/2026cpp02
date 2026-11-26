#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    ofstream ostr("dl.txt", ios::out | ios::app);  // ¨ú©÷¡¾? ©ö¡¿ ?©¬¡Æ¢®
    if (!ostr.is_open())
    {
        cout << "dl.txt" << endl;
        assert(false);
    }
    ostr << "cpp2" << " ";
    ostr << "bigdata2";
    ostr.close();
    return 0;
}