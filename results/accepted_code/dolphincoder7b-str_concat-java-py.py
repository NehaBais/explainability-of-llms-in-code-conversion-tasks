class Str:
    def __init__(self):
        self.s = "hello"

    def concat_string(self):
        print(self.s + " literal")
        self.s2 = self.s + " literal"
        return self.s2


if __name__ == "__main__":
    mystr = Str()
    print(mystr.concat_string())
