#include <iostream>

using namespace std;


int main()
{
    int rob, rob1;
    int c;
    string tekst;
    cout << "wprowadz tekst: ";
    cin >> tekst;
    for (int i = 0; i < tekst.size(); i++)
    {
        rob = (int)tekst.c_str()[i];
        rob1 = rob + 3;
        cout <<(char)rob1;
    }
    return 0;
}
