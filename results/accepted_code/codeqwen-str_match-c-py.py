def starts_with(container, target):
    if len(container) < len(target):
        return False
    else:
        return container[: len(target)] == target


def ends_with(container, target):
    if len(container) < len(target):
        return False
    else:
        return container[-len(target) :] == target


def does_contain(container, target):
    return target in container


print("Starts with Test ( Hello,Hell ) :", starts_with("Hello", "Hell"))
print("Ends with Test ( Code,ode ) :", ends_with("Code", "ode"))
print("Contains Test ( Google,msn ) :", does_contain("Google", "msn"))
