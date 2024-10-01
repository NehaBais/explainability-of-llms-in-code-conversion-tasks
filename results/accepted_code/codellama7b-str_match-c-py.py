import string


def startsWith(container, target):
    if len(target) > len(container):
        return False
    return container.startswith(target)


def endsWith(container, target):
    if len(target) > len(container):
        return False
    return container.endswith(target)


def doesContain(container, target):
    return target in container


if __name__ == "__main__":
    print("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"))
    print("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"))
    print("Contains Test ( Google,msn ) :", doesContain("Google", "msn"))
