stringA = "tacoloco"
stringB = "co"
q1 = stringA.startswith(stringB)
q2 = stringB in stringA
m = re.finditer(stringB, stringA)
q2matches = [i for i in range(len(stringA)) if stringB in stringA[i:]]
q3 = stringA.endswith(stringB)
print("1: Does '"+stringA+"' start with '"+stringB+"'? " + ( q1 ? "Yes." : "No."))
print("2: Is '"+stringB+"' contained in '"+stringA+"'? " + (q2 ? "Yes." : "No."))
if q2 and len(q2matches) > 1:
	print("   In fact, it happens "+len(q2matches)+" times within '"+stringA+"', at index"+(len(q2matches) > 1 ? "es" : "")+" "+str(q2matches)+".")
print("3: Does '"+stringA+"' end with '"+stringB+"'? " + ( q3 ? "Yes." : "No."))