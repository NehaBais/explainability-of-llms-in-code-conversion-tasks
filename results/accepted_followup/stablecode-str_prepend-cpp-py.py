from functools import reduce

def main():
    my_strings = ["prepended to", "my string"]
    prepended = ''.join(reduce(lambda a, b: a + b, my_strings)), '')
    print(prepended)

if __name__ == "__main__":
    main()