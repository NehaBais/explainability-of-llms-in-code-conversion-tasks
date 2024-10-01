import os

def file_exists(path): 
    print(path)
    if os.path.exists(path):
        if os.path.isfile(path):
            print(" exists with a file size of {} bytes.".format(os.path.getsize(path))))
        else:
            print(" is a directory")
    else:
        print(" does not exist")

# Usage examples 
file_exists("input.txt") 
file_exists("zero_length.txt") 
file_exists("docs/input.txt")  
file_exists("docs/zero_length.txt")