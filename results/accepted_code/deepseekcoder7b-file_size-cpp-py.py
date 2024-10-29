import os

def print_file_size(filename): 
    try: 
        size = os.path<｜begin▁of▁sentence｜>.getsize(filename)
        print("Size of file {} is {} bytes.".format(filename, size))
    except Exception as ex: 
        print(ex)

if __name__ == "__main__": 
    print_file_size("input.txt")
    # If the file exists at root directory it should be "/input.txt". Adjust path accordingly if needed
    print_file_size("/input.txt")