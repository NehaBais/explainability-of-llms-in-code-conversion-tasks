import os.path


def check_file_and_folder_existance(directory, file_name):
    if not os.path.isdir(directory):
        print("The directory does not exist")
    else:
        if not os.path.isfile(os.path.join(directory, file_name)):
            print("The file does not exist in this directory")
        else:
            print("The file and the directory exists.")
