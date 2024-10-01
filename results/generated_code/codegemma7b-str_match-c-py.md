```python
def starts_with(container, target):
    container_len = len(container)
    target_len = len(target)
    if container_len < target_len:
        return False
    return container[:target_len] == target


def ends_with(container, target):
    container_len = len(container)
    target_len = len(target)
    if container_len < target_len:
        return False
    return container[container_len - target_len:] == target


def does_contain(container, target):
    return target in container


def does_contain_with_location(container, target):
    index = container.find(target)
    if index == -1:
        return False, None
    return True, index


def does_contain_all(container, target):
    count = 0
    for i in range(len(container)):
        if container[i:].startswith(target):
            count += 1
    return count == container.count(target)


# Example usage
print("Starts with Test ( Hello,Hell ) : ", starts_with("Hello", "Hell"))
print("Ends with Test ( Code,ode ) : ", ends_with("Code", "ode"))
print("Contains Test ( Google,msn ) : ", does_contain("Google", "msn"))
```
