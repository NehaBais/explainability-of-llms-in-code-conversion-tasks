s = "abc文字化けdef"
n = 2
m = 3

    # Print 3 characters starting at index 2 (c文字))
print("{}".format(s[n:n+m]])))

    # Print all characters starting at index 2 (c文字化けdef)
print("{}".format(s[n:]))))

    # Print all characters except the last (abc文字化けde))
print("{}".format(s[:-1][n:n+m]])))

    # Print 3 characters starting with 'b' (bc文))
print("{}".format(s[s.find('b')+n : s.find('b')+n + m ]))))

    # Print 3 characters starting with "けd" (けde))
print("{}".format(s[s.find('けd')+n : s.find('けd')+n + m ]))))