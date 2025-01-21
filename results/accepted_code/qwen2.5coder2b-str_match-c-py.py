def starts_with(container, target):
    return container.startswith(target)


def ends_with(container, target):
    return container.endswith(target)


def does_contain(container, target):
    return target in container


def main():
    print("Starts with Test: ", starts_with("Hello", "Hell"))
    print("Ends with Test: ", ends_with("Code", "ode"))
    print("Contains Test: ", does_contain("Google", "msn"))


if __name__ == "__main__":
    main()
