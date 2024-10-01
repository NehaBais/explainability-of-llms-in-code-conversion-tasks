class strAppend:
    def __init__(self):
        self.string = "abc"

    def printString(self):
        print(self.string)
        self.string += "def"
        print(self.string)


if __name__ == "__main__":
    obj = strAppend()
    obj.printString()
