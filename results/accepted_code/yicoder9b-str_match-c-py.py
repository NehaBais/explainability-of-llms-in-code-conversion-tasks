def startsWith(container, target):
    return container.startswith(target)


def endsWith(container, target):
    return container.endswith(target)


# Handles multiple occurrences and prints their locations
def doesContain(container, target):
    pos = 0
    while pos < len(container):
        pos = container.find(target, pos)
        if pos == -1:
            break
        print("Location of match:", pos)
        # To find the next occurrence, start searching from the next position
        pos += 1
    return True if pos != -1 else False


print("Starts with Test ( Hello,Hell ) : ", startsWith("Hello", "Hell"))
print("Ends with Test ( Code,ode ) : ", endsWith("Code", "ode"))
print("Contains Test ( Google,msn ) : ", doesContain("Google", "msn"))
