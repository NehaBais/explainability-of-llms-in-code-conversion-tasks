import os
import stat

def create_file(fn):
    try:
        with open(fn, 'w') as f:
            pass
        print("File", fn, "created!")
    except Exception as e:
        print(e)
        return

def create_dir(dn):
    try:
        os.mkdir(dn, mode=stat.S_IRWXU|stat.S_IRGRP|stat.S_IRWXO))
        print("Directory", dn, "created!")
    except Exception as e:
        print(e)
        return

def main():
    create_file("input.txt")
    create_file("/input.txt")
    create_dir("docs")
    create_dir("/docs")

if __name__ == "__main__":
    main()