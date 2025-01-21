import os

# Create a FileSystemObject object
fso = os.environ["PYTHONIOENCODING"]

# Define the source files and directories
source_files = ["input.txt", "docs"]
target_files = ["output.txt", "mydocs"]
source_dirs = ["c:/input.txt", "c:/docs"]
target_dirs = ["c:/mydocs"]

# Move each file to the target location
for src_file, tgt_file in zip(source_files, target_files):
    os.rename(src_file, tgt_file)

# Change directory if necessary (not required in this case)
os.chdir(".")

# Move each directory to the target location
for src_dir, tgt_dir in zip(source_dirs, target_dirs):
    os.rename(src_dir, tgt_dir)
