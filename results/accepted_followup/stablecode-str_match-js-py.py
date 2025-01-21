string_a = "tacoloco"
string_b = "co"
q1 = string_a.startswith(string_b))

q2 = string_a.find(string_b))

q2matches = []
for match in re.finditer('('+re.escape(string_b)+')', string_a):
    q2matches.append(match.start()))

q3 = string_a.endswith(string_b))

print("1: Does '" + string_a + "' start with '" + string_b + "'? " + ("Yes." if q1 else "No.")))

if q2 != -1:
    print("2: Is '" + string_b + "' contained in '" + string_a + "'? " + 
               ("Yes, at index "+str(q2)+"." if len(q2matches) == 1 else "No."))
elif q2 == -1 and len(q2matches) > 1:
    print("   In fact, it happens " + str(len(q2matches))) + " times within '"+string_a+"', at index"+(", ".join([str(match) for match in q2matches])))+".")
else:
    print("2: Is '" + string_b + "' contained in '" + string_a + "'? " + 
               ("Yes." if len(q2matches) == 1 else "No."))

print("3: Does '" + string_a + "' end with '" + string_b + "'? " + 
           ("Yes." if q3 else "No.")))