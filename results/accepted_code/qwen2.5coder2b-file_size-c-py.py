import os


def get_file_size(file_path):
    try:
        # Get the size of the file using stat()
        size = os.stat(file_path).st_size
        return size
    except FileNotFoundError:
        print("File not found.")
        return None


# Call the function with 'input.txt' and '/'
file_size_input_txt = get_file_size("input.txt")
file_size_root_dir = get_file_size("/")

if file_size_input_txt is not None:
    print(f"Size of input.txt: {file_size_input_txt} bytes")
if file_size_root_dir is not None:
    print(f"Size of /directory: {file_size_root_dir} bytes")
