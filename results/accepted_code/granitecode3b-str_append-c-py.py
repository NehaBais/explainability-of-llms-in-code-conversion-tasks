str = "Good Morning"
cstr = " to all"
cstr2 = " !!!"
if len(str) + len(cstr) + len(cstr2) <= len(str):
    str += cstr + cstr2
    print(str)
else:
    print("Error: Insufficient space allocated for the string")
