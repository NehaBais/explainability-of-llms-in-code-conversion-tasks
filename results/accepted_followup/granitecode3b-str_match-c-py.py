def startsWith(container, target):
    return container.startswith(target)


def endsWith(container, target):
    return container.endswith(target)


def doesContain(container, target):
    if target in container:
        print("Location of match:", container.find(target))
        return True
    else:
        return False


container = "Hello,Hell"
target1 = "Hell"
print(
    "Starts with Test (", container, ",", target1, ") :", startsWith(container, target1)
)

container = "Code"
target2 = "ode"
print("Ends with Test (", container, ",", target2, ") :", endsWith(container, target2))

container = "Google"
target3 = "msn"
print(
    "Contains Test (", container, ",", target3, ") :", doesContain(container, target3)
)
