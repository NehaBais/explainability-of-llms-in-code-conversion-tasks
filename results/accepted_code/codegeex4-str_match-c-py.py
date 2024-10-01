def starts_with(container, target):
    return container.startswith(target)


def ends_with(container, target):
    return container.endswith(target)


def does_contain(container, target):
    locations = [i for i in range(len(container)) if container.startswith(target, i)]
    return len(locations) > 0


container = "Hello"
target = "Hell"
print("Starts with Test ( Hello,Hell ) : ", starts_with(container, target))

container = "Code"
target = "ode"
print("Ends with Test ( Code,ode ) : ", ends_with(container, target))

container = "Google"
target = "msn"
print("Contains Test ( Google,msn ) : ", does_contain(container, target))
