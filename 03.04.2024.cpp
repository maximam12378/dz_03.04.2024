#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void gap(int x = 1)
{
    while (x != 0)
    {
        cout << endl;
        x--;
    }
        
}


class MyString
{
    
    char* str;
    int size;
public:
    

    void return_counter()
    {
        
    }

    MyString() 
    {
        size = 80;
        str = new char[size+1];
        str[size] = '\0';
    }

    MyString(int n) 
    {
        size = n;
        str = new char[size+1];
        str[size] = '\0';
    }

    MyString(int n, char string[])
    {
        size = n;
        str = new char[size + 1];
        str[size] = '\0';
        strcpy_s(str, size + 1, string);
    }
    void show_str()
    {
        cout << str;
    }

    void input_str(int size)
    {
        cin.getline(str, size+1);
    }

    

    ~MyString()
    {
        delete[] str;
    }
};





int main()
{
    /*const int N = 90;
    char test[N];
    cin.getline(test, N+1);
    MyString str1(255, test);
    str1.show_str();

    gap(3);

    str1.input_str(N + 1);
    str1.show_str();*/


    

}