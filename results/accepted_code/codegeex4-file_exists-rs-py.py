import os


def main():
    for file in ["input.txt", "docs", "/input.txt", "/docs"]:
        if os.path.exists(file):
            if os.path.isdir(file):
                print(f"{file} is a directory")
            else:
                print(f"{file} is a file")
        else:
            print(f"{file} does not exist")


main()
