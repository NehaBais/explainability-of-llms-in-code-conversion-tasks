class Str:
    def __init__(self):
        self.s = "hello"
        print(self.s + " literal")
        self.s2 = self.s + " literal"
        print(self.s2)


Str()
