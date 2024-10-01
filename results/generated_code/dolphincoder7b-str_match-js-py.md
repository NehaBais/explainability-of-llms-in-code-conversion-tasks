This is the JavaScript code converted to Python:
```python
string_a = "tacoloco"
string_b = "co"
q1, q2, q2multi, m, q2matches = False, None, None, None, []
# stringA starts with stringB
q1 = string_a[:len(string_b)] == string_b
# stringA contains stringB
q2 = string_a.find(string_b)
# multiple matches
q2multi = re.compile(string_b, re.IGNORECASE | re.DOTALL)
while m := q2multi.search(string_a):
    q2matches.append(m.start())
# stringA ends with stringB
q3 = string_a[-len(string_b):] == string_b
# print results
print("1: Does '" + string_a + "' start with '" + string_b + "'? " + ("Yes." if q1 else "No."))
print("2: Is '" + string_b + "' contained in '" + string_a + "'? " + ("Yes, at index " + str(q2) + "." if ~q2 else "No."))
if ~q2 and len(q2matches) > 1:
    print("   In fact, it happens " + str(len(q2matches)) + " times within '" + string_a + "', at index" + ("es" if len(q2matches) > 1 else "") + " " + ', '.join([str(match) for match in q2matches]) + ".")
print("3: Does '" + string_a + "' end with '" + string_b + "'? " + ("Yes." if q3 else "No."))
```
