import os
from pathlib import Path


def main():
    for file in ["input.txt", "docs", "/", "input.txt", "/docs"]:
        try:
            attr = os.stat(file)

            if os.path.isdir(file):
                print(f"{file} is a directory")
            else:
                print(f"{file} is a file")

        except FileNotFoundError as e:
            print(f"{file} does not exist")
