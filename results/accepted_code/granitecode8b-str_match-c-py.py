def startsWith(container, target):
 clen = len(container)
 tlen = len(target)
 if clen < tlen:
 return 0
 return container.startswith(target)
def endsWith(container, target):
 clen = len(container)
 tlen = len(target)
 if clen < tlen:
 return 0
 return container.endswith(target)
def doesContain(container, target):
 return target in container
container = "Hello"
target1 = "Hell"
target2 = "Code"
target3 = "msn"
print("Starts with Test (", container,",", target1, ") : ", startsWith(container, target1))
print("Ends with Test (", container,",", target2, ") : ", endsWith(container, target2))
print("Contains Test (", container,",", target3, ") : ", doesContain(container, target3))