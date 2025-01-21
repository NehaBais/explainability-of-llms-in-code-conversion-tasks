def starts_with(container, target):
    if len(target) > len(container):
        return False
    return container.startswith(target)


def ends_with(container, target):
    if len(target) > len(container):
        return False
    return container.endswith(target)


def does_contain(container, target):
    index = container.find(target)
    if index == -1:
        return False, None
    else:
        return True, index


print("Starts with Test ( Hello,Hell ) : ", starts_with("Hello", "Hell"))
print("Ends with Test ( Code,ode ) : ", ends_with("Code", "ode"))
print("Contains Test ( Google,msn ) : ", does_contain("Google", "msn"))

# Handle multiple occurrences of a string for part 2
print("\nOccurrences of 'o' in 'Hello' : ")
locations = [i for i in range(len("Hello")) if "Hello"[i] == "o"]
for location in locations:
    print(location)
