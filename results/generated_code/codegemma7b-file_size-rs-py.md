```python
import os
import sys

def main():
    if len(sys.argv) < 2:
        print("No file name supplied", file=sys.stderr)
        sys.exit(1)

    file_name = sys.argv[1]

    try:
        metadata = os.stat(file_name)
    except FileNotFoundError as e:
        print(f"Error: {e}", file=sys.stderr)
        sys.exit(2)

    print(f"Size of {file_name} is {metadata.st_size} bytes")

if __name__ == "__main__":
    main()
```
