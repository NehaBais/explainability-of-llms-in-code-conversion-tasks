### Pseudocode:

Check_File_and_Folder_Existance(directory, file_name):
    if the directory does not exist:
        print("The directory does not exist")
    else:
        if the file does not exist in that directory:
            print("The file does not exist in this directory")
        else:
            print("The file and the directory exists.")


### Code
```python
import os.path

def check_file_and_folder_existance(directory, file_name):
    if not os.path.isdir(directory):
        print("The directory does not exist")
    else:
        if not os.path.isfile(os.path.join(directory, file_name)):
            print("The file does not exist in this directory")
        else:
            print("The file and the directory exists.")
```
