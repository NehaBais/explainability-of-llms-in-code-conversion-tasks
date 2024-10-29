The Python version of the code would look like this:

```python
import os
import sys
import argparse

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("filename", nargs='?', default="input.txt")
    args = parser.parse_args()
    
    file_name = args.filename 

    try:
        with open(file_name, 'r') as f:
            print(f"Size of {file_name} is {len(f.read())} bytes")
            
    except FileNotFoundError as e:
        exit_err("No such file", 1)
        
def exit_err(msg, code):
    print(f"Error: {msg}", file=sys.stderr)
    sys.exit(code)
    
if __name__ == "__main__":
    main()
```

