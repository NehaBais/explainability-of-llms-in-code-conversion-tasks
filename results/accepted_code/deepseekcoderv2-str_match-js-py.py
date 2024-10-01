stringA = 'tacoloco'
stringB = 'co'
q1 = stringA[0:len(stringB)] == stringB # first string starts with second string
q2 = stringA.find(stringB)                # first string contains the second string at any location
q3 = stringA[-len(stringB):] == stringB  # first string ends with the second string
print("1: Does '"+stringA+"' start with '"+stringB+"'? " + ("Yes." if q1 else "No."))
print("2: Is '"+stringB+"' contained in '"+stringA+"'? " + (f"Yes, at index {q2}." if ~q2 else "No."))
if ~q2 and len(q2) > 1:    # Handle multiple occurrences of a string for part 2
    print("   In fact, it happens", q2matches.length, "times within '"+stringA+"', at index"+(q2matches.length > 1 ? "es" : "")+" "+q2matches.join(', ')+".")
print("3: Does '"+stringA+"' end with '"+stringB+"'? "   + ("Yes." if q3 else "No."))