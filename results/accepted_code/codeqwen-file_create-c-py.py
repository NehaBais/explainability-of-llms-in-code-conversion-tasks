import os

# here in current working directory
open("output.txt", "w").close()
os.mkdir("docs")

# root of filesystem
with open("/output.txt", "w").close():
    pass  # no need to explicitly create a directory, because we are using the 'w' mode which will create one if it doesn't exist
os.makedirs(
    "/docs"
)  # this will make sure the directory exists even if it was created in previous step
