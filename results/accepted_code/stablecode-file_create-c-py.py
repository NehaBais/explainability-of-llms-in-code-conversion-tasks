import os
import stat

# Create file in current directory
with open("output.txt", "w") as f:
    pass

# Setting permissions for 'output.txt' (rw-r-----)
os.chmod("output.txt", stat.S_IRUSR | stat.S_IWUSR | stat.S_IRGRP | stat.S_IWGRP))

# Create directory 'docs' in current directory
try:
    os.mkdir('docs')
except FileExistsError:
    pass

# Setting permissions for 'docs' (rwxr-x---)
os.chmod("docs", stat.S_IRUSR | stat.S_IWUSR | stat.S_IRGRP | stat.S_IWGRP))