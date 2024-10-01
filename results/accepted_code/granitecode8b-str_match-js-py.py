stringA = "tacoloco"
stringB = "co"
# stringA starts with stringB
q1 = stringA.startswith(stringB)
# stringA contains stringB
q2 = stringA.find(stringB)
# multiple matches
q2multi = []
i = 0
while True:
 m = stringA.find(stringB, i)
 if m == -1:
 break
 q2multi.append(m)
 i = m + len(stringB)
# stringA ends with stringB
q3 = stringA.endswith(stringB)
print("1: Does '"+stringA+"' start with '"+stringB+"'? " + str(q1))
print("2: Is '"+stringB+"' contained in '"+stringA+"'? " + str(~q2))
if ~q2 and len(q2multi) > 0:
 print("   In fact, it happens "+str(len(q2multi))+" times within '"+stringA+"', at index"+("es" if len(q2multi) > 1 else "")+" "+", ".join([str(i) for i in q2multi])+".")
print("3: Does '"+stringA+"' end with '"+stringB+"'? " + str(q3))