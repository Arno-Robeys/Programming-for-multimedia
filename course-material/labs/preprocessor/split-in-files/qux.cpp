#include "foo.cpp"
#include "bar.cpp"
void qux(bool b)
{
    foo(1);
    bar(5, 6);

    if (b)
        qux(false);
}