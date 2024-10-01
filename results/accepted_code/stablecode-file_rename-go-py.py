import os
import shutil

def main():
    # rename input.txt to output.txt in current working directory
    os.rename("input.txt", "output.txt"))

    # create a new directory called mydocs and move the contents of docs folder into the newly created mydocs directory
    shutil.copytree("docs", "mydocs")
    
    # rename input.txt in filesystem root to output.txt
    os.rename("/input.txt", "/output.txt"))

    # create a new directory called mydocs and move the contents of docs folder into the newly created mydocs directory
    shutil.copytree("/"+os.getcwd().split('/')[-1]+"/docs", "/"+os.getcwd().split('/')[-1]+"/mydocs")

    # print the current working directory and filesystem root
    print(f"Current Working Directory: {os.getcwd()}")
    print(f"Filesystem Root: {os.path.realpath('/'+os.getcwd().split('/')[-1]))}")

if __name__ == "__main__":
    main()