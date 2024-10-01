```
import sys

def main():
    myStrings = ["prepended to", "my string"]
    prepended = ""
    for i in range(len(myStrings)):
        prepended += myStrings[i]
    print(prepended)

if __name__ == "__main__":
    main()
```
