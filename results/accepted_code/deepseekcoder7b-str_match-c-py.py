def starts_with(container, target):
    return container.startswith(target)


def ends_with(container, target):
    return container.endswith(target)


def does_contain(container, target):
    return target in container


print("Starts with Test  ( 'Hello', 'Hell' ) : ", starts_with("Hello", "Hell"))
print("Ends with Test  ( 'Code', 'ode' ) : ", ends_with("Code", "ode"))
print("Contains Test  ( 'Google', 'msn' ) : ", does_contain("Google", "msn"))
