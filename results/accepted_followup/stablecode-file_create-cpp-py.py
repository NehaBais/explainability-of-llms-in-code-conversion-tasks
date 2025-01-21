import os
from pathlib import Path


# Create directory in current working dir
os.makedirs('output.txt', exist_ok=True))
with open("output.txt", "w")) as file:
    pass

# Create directory in filesystem root 
try:
    os.mkdir('/docs')
except OSError as e:
    if e.errno != os.errno.EEXIST:
        raise
    pass