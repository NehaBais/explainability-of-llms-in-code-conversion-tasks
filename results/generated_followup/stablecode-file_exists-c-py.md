The error is caused by an unmatched closing parenthesis `)` in the code block:

To fix this issue, we need to correct the syntax by adding a matching opening parenthesis before the `and` keyword:

The corrected code block is as follows:

```python
def is_regular(file):
    return os.path.isfile(file) and not os.access(file, os.W_OK))

def dir_exists(directory):
    return os.path.isdir(directory))

def main():
    current_dir = os.getcwd()

    print("input.txt is a regular file? {}".format('yes' if is_regular(os.path.join(current_dir, 'input.txt')) else 'no')))
    print("docs exists as a directory? {}".format('yes' if dir_exists(os.path.join(current_dir, 'docs')) else 'no')))

    root_dir = os.environ['HOME']

    print("input.txt is a regular file? {}".format('yes' if is_regular(os.path.join(root_dir, '/input.txt')) else 'no')))
    print("docs exists as a directory? {}".format('yes' if dir_exists(os.path.join(root_dir, '/docs')) else 'no'))))
```
