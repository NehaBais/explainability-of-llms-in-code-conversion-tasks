import shutil

# Define the source files and directories
src_input = "input.txt"
src_docs = "docs"
dst_input = "output.txt"
dst_docs = "mydocs"

# Rename the files and directories in the current working directory
shutil.move(src_input, dst_input)
shutil.move(src_docs, dst_docs)

# Rename the files and directories in the filesystem root
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
