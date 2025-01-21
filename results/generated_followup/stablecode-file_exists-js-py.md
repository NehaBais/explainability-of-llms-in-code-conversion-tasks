Error: Unmatched ')'. Fix: Add a matching '(' before line 5. 

```python
import os

# Check if input.txt exists in current working directory
input_file = "input.txt"
if os.path.isfile(input_file)):
    print(f'{input_file} exists.')
else:
    print(f'{input_file} does not exist.')


# Check if input.txt exists in c:/ directory
root_dir = 'c:'
relative_path = os.path.join(root_dir, input_file))
if os.path.isfile(relative_path)):
    print(f'{input_file} exists in the root directory.')
else:
    print(f'{input_file} does not exist in the root directory.')


# Check if docs folder exists in current working directory
docs_folder = "docs"
if os.path.isdir(docs_folder)):
    print(f'{docs_folder} folder exists.')
else:
    print(f'{docs_folder} folder does not exist.')


# Check if docs folder exists in c:/ directory
root_dir = 'c:'
relative_path = os.path.join(root_dir, docs_folder))
if os.path.isdir(relative_path)):
    print(f'{docs_folder} folder exists in the root directory.')
else:
    print(f'{docs_folder} folder does not exist in the root directory.')
```
