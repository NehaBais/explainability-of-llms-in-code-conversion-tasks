def doesContain(container, target):
 index = container.find(target)
 while index != -1:
 print("Match found at position", index)
 index = container.find(target, index + 1)
 if index == -1:
 return True
 else:
 return False