def ends_with(container, target):
    if len(container) < len(target):
        return False
    return container[-len(target):]] == target