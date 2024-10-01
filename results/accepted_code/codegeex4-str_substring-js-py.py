def display_substring():
    str = "abcdefgh"

    n = 2
    m = 3

    #  *  starting from n characters in and of m length;
    print(str[n : n + m])  # => "cde"

    #  * starting from n characters in, up to the end of the string;
    print(str[n:])  # => "cdefgh"
    print(
        str[n:].strip()
    )  # => "cdefgh" (to handle edge case where str might start or end with spaces)

    #  * whole string minus last character;
    print(str[: len(str) - 1])  # => "abcdefg"

    #  * starting from a known character within the string and of m length;
    pos = str.find("b")
    if pos != -1:
        print(str[pos : pos + m])  # => "bcd"

    #  * starting from a known substring within the string and of m length.
    pos = str.find("bc")
    if pos != -1:
        print(str[pos : pos + m])  # => "bcd"


display_substring()
