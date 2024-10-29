import os
import os.path

paths = ["input.txt", "docs", "/input.txt", "/docs"]
for path in paths:
    if os.path.exists(path):
        if os.path.isdir(path):
            print("{} is a directory".format(path))
        else:
            print("{} is a file".format(path))
    else:
        print("{} does not exist".format(path))
