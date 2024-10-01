def starts_with(container, target):
    return container.startswith(target)


def ends_with(container, target):
    return container.endswith(target)


def does_contain(container, target):
    if target in container:
        print(
            "Match found at index", container.index(target)
        )  # Print the location of the match
        return True
    else:
        return False


print("Starts with Test ( Hello,Hell ) : ", starts_with("Hello", "Hell"))
print("Ends with Test ( Code,ode ) : ", ends_with("Code", "ode"))
does_contain("Google", "msn")  # It prints the location of the match if it exists
