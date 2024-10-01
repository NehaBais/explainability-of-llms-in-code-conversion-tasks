import os

os.makedirs("output.txt", exist_ok=True)  # Create empty file
os.makedirs("/output.txt", exist_ok=True)  # Create empty file in the root directory
os.mkdir("docs")  # Create directory 'docs'
os.mkdir("/docs")  # Create directory '/docs'
