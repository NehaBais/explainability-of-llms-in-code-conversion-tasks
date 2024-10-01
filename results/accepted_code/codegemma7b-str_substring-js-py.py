str = "abcdefgh"

n = 2
m = 3

#  *  starting from n characters in and of m length;
str[n:n+m]  # => "cde"

#  * starting from n characters in, up to the end of the string;
str[n:]  # => "cdefgh"

#  * whole string minus last character;
str[:-1]  # => "abcdefg"

#  * starting from a known character within the string and of m length;
str.index('b'):str.index('b')+m  # => "bcd"

#  * starting from a known substring within the string and of m length. 
str.index('bc'):str.index('bc')+m  # => "bcd"