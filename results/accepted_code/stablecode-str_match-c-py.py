def starts_with(container, target):
    if len(container) < len(target):
        return False
    return container[:len(target)] == target

def ends_with(container, target):
    if len(container) < len(target):
        return False
    return container[-len(target):]] == target

def does_contain(container, target):
    return target in container