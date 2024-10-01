def startsWith(container, target):
    clen = len(container)
    tlen = len(target)
    if clen < tlen:
        return False
    return container[:tlen] == target


def endsWith(container, target):
    clen = len(container)
    tlen = len(target)
    if clen < tlen:
        return False
    return container[-tlen:] == target


def doesContain(container, target):
    return target in container


print("Starts with Test ( Hello,Hell ) :", startsWith("Hello", "Hell"))
print("Ends with Test ( Code,ode ) :", endsWith("Code", "ode"))
print("Contains Test ( Google,msn ) :", doesContain("Google", "msn"))
