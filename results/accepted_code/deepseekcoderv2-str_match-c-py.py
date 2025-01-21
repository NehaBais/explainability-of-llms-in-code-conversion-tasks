def starts_with(container, target):
    return container.startswith(target)


def ends_with(container, target):
    return container.endswith(target)


import re


def does_contain(container, target):
    if match := re.search(target, container):
        print(f"Match found at index: {match.start()}")
        return True
    return False


# Test cases
print("Starts with Test ( Hello,Hell ) :", starts_with("Hello", "Hell"))
print("Ends with Test ( Code,ode ) :", ends_with("Code", "ode"))
print("Contains Test ( Google,msn ) :", does_contain("Google", "msn"))
