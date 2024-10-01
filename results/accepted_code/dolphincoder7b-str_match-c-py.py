import re


def startsWith(container: str, target: str) -> bool:
    if len(container) < len(target):
        return False
    return container[: len(target)] == target


def endsWith(container: str, target: str) -> bool:
    if len(container) < len(target):
        return False
    return container[-len(target) :] == target


def doesContain(container: str, target: str) -> bool:
    return target in container


if __name__ == "__main__":
    print("Starts with Test ( Hello,Hell )  :", startsWith("Hello", "Hell"))
    print("Ends with Test ( Code,ode )    :", endsWith("Code", "ode"))
    print("Contains Test ( Google,msn )   :", doesContain("Google", "msn"))
