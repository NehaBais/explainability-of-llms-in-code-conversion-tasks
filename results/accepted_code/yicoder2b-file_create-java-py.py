import os


class CreateFileTest:
    def __init__(self):
        pass

    @staticmethod
    def create_file():
        with open("output.txt", "wb") as f:
            pass
        os.mkdir("docs")
        os.mkdir("/docs")
