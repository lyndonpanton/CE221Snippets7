#include <iostream>
#include <string>

using namespace std;


template <class T>
void custom_swap(T &a, T &b);
void output_divider(char c, int length);
void test_custom_swap();

int main()
{
    test_custom_swap();

    return 0;
}

template <class T>
void custom_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void output_divider(char c, int length)
{
    if (length < 1)
        length = 10;

    for (int i = 0; i < length; i++)
    {
        cout << c;
    }

    cout << endl;
}

void test_custom_swap()
{
    output_divider('-', 32);

    int a = 9;
    int b = 1;

    cout << "a was equal to " << a << " and b was equal to " << b << "."
        << endl;

    custom_swap(a, b);

    cout << "a is now equal to " << a << " and b is now equal to " << b
        << "." << endl;

    output_divider('-', 32);

    double c = 8.76;
    double d = 2.34;

    cout << "c was equal to " << c << " and d was equal to " << d << "."
        << endl;

    custom_swap(c, d);

    cout << "c is now equal to " << c << " and d is now equal to " << d
        << "." << endl;

    output_divider('-', 32);

    char e = 'e';
    char f = 'f';

    cout << "e was equal to " << e << " and f was equal to " << f << "."
        << endl;

    custom_swap(e, f);

    cout << "e is now equal to " << e << " and f is now equal to " << f
        << "." << endl;

    output_divider('-', 32);

    string g = "giraffe";
    string h = "hare";

    cout << "g was equal to " << g << " and h was equal to " << h << "."
        << endl;

    custom_swap(g, h);

    cout << "g is now equal to " << g << " and h is now equal to " << h
        << "." << endl;

    output_divider('-', 32);
}