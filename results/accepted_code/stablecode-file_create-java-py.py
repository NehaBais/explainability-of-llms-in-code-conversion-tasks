import os
try:
    # Create file "output.txt" twice in current working directory and filesystem root
    with open("output.txt", 'w') as f:
        pass  # Since we want an empty file, just do nothing here

    with open(os.path.join(File.separator, "output.txt")), 'w') as f:
        pass  # Since we want an empty file, just do nothing here


    # Create directory "docs" twice in current working directory and filesystem root
    os.mkdir("docs")

    os.mkdir(os.path.join(File.separator, "docs"))


except Exception as e:
    print(e)