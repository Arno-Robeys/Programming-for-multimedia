    #include <iostream>

    // Write macros here
    #define SWITCH_STRING(tag) 
    #define STRING_CASE(x) if(tag == #x)
    #define STRING_ELSE else


    int foo(std::string tag)
    {
        SWITCH_STRING(tag)
        {
            STRING_CASE(a)
            {
                return 1;
            }

            STRING_CASE(b)
            {
                return 2;
            }

            STRING_CASE(abc)
            {
                return 3;
            }

            STRING_ELSE
            {
                return -1;
            }
        }
    }