#Error explanation:
#/ tmp / stablecode - str_cmp - rs - cpp                                                                                                      \
    .cpp : 48 : 54 : error : redefinition of 'a' with a different type : 'bool' vs 'basic_string<char, char_traits<char>, allocator<char> >'( \
        aka 'std::__1::string')
#This error occurs because the variable 'a' is defined as an integer in        \
    line 6,                                                                    \
    and then it is redefined as a string in line 48.

#Fix:
#To fix this error,                                                            \
    you should give a different name to the second definition of 'a'.