'''

import os
from pathlib import Path
def mkdirs(dir: str) -> None:
    # if (os.path.exists(dir)):
    #     print('Directory already exists')
    # else:
    Path(dir).mkdir()  # this is all that's needed to create a directory


# os.makedirs(dir, exist_ok=True)  
print(os.path.exists('./hello'))

