#include <iostream>
#include <string>

#include "Pair.h"

using namespace std;


template <class T>
void custom_swap(T &a, T &b);
void output_divider(char c, int length);
template <class T>
void print_array_contents(const T array[], int count);
void test_print_array_contents();
void test_custom_swap();
template <class S, class T>
void test_multiple_template_function(const S&, const T&);
void test_template_class();

int main()
{
    test_custom_swap();
    test_print_array_contents();
    test_template_class();
    test_multiple_template_function("Alice", "Astronaut");

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

template <class T>
void print_array_contents(const T array[], int count)
{
    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
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

void test_print_array_contents()
{
    // int
    int int_array[] = { 1, 3, 5, 7, 9, 4, 2 };
    int int_array_length = sizeof(int_array) / sizeof(int_array[0]);

    print_array_contents(int_array, int_array_length);

    // double
    double double_array[] = { 3.14, 0.999, 2.56, 7.4, 1.001 };
    double double_array_length = sizeof(double_array) / sizeof(double_array[0]);

    print_array_contents(double_array, double_array_length);

    // char
    char char_array[] = { 'a', 'e', 'i', 'o', 'u' };
    char char_array_length = sizeof(char_array) / sizeof(char_array[0]);

    print_array_contents(char_array, char_array_length);

    output_divider('-', 32);
}

template <class S, class T>
void test_multiple_template_function(const S &s, const T &t)
{
    cout << '<' << s << ", " << t << '>' << endl;
}

void test_template_class()
{
    Pair<string, double> item("Apple", 0.59);

    cout << item.getFirst() << endl;
    cout << item.getSecond() << endl;

    output_divider('-', 32);
}