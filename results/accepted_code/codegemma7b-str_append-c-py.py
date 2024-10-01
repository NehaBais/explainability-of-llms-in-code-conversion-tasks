str = "Good Morning"
cstr = " to all"
cstr2 = " !!!"

if len(str) > len(str) + len(cstr) + len(cstr2):
    # 1st method
    str += cstr

    # 2nd method
    str += cstr2

print(str)
