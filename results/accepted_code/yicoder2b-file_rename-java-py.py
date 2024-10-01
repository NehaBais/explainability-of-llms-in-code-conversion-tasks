import os


class FileRenameTest:
    @staticmethod
    def renameFile(oldname, newname):
        # Check if old name exists
        if not os.path.exists(oldname):
            print("The file or directory with the given name does not exist!")
            return False
        try:
            os.rename(oldname, newname)  # Rename file or directory
        except Exception as e:
            print(f"An error occurred while renaming {oldname} to {newname}: {str(e)}")
            return False
        return True

    @staticmethod
    def test(type, oldname, newname):
        if type.lower() == "file":
            print(
                f'The file {oldname} was renamed as {"successful" if FileRenameTest.renameFile(oldname, newname) else "unsuccessful"}'
            )
        elif type.lower() == "directory":
            print(
                f'The directory {oldname} was renamed as {"successful" if FileRenameTest.renameFile(os.path.join(os.getcwd(), oldname), os.path.join(os.getcwd(), newname)) else "unsuccessful"}'
            )

    def __init__(self):
        pass


if __name__ == "__main__":
    self = FileRenameTest()  # Create an instance of the class (not needed here)
    self.test("file", "input.txt", "output.txt")
    self.test(
        "file",
        os.path.join(os.getcwd(), "input.txt"),
        os.path.join(os.getcwd(), "output.txt"),
    )  # The current directory (not root)
    self.test("directory", "docs", "mydocs")
    self.test(
        "directory",
        os.path.join(os.getcwd(), "docs"),
        os.path.join(os.getcwd(), "mydocs"),
    )  # The current directory (not root)
