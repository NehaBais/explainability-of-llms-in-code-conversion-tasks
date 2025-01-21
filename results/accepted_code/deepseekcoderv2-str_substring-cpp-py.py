def display_substring():
    s = "0123456789"

    n = 3
    m = 4
    c = "2"
    sub = "456"

    print(s[n : n + m])
    print(s[n:])
    print(s[:-1])
    start_index = s.find(c)
    if start_index != -1:
        print(s[start_index : start_index + m])
    else:
        print("Character not found")

    sub_index = s.find(sub)
    if sub_index != -1:
        print(s[sub_index : sub_index + m])
    else:
        print("Substring not found")


display_substring()
