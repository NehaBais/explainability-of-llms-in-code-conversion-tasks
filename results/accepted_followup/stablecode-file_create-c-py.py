import os
import stat


with open("output.txt", "w") as f:
    pass

os.chmod("output.txt", stat.S_IRUSR | stat.S_IWUSR | stat.S_IRGRP | stat.S_IWGRP)
