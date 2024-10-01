```
from pathlib import Path
import os
# def mkdirp(dir):
#     if dir == '': return '/'
#     head, tail = os.path.split(dir)
#     if not head:
#         print("head", head, "tail", tail, dir)
#         return mkdirp(head)+'/'
#     elif tail != '':
#         return mkdirp(head)+'/'+tail
#     else:
#         return mkdirp(head)+'/'+tail
def mkdirp(dir):
    if os.path.isdir(dir):
        print("exists")
        pass
    p = Path(dir)
    parent_path = str(p.parent.absolute())
    if not parent_path == "":
        mkdirp(str(p.parent))
    
    if (not os.path.isfile(dir)):  # does the file already exist?
        print('creating directory...')
        try:
            os.mkdir(dir)
        except OSError as e:  # when the folder already exists it will throw an exception, which we ignore here
            pass
    else:
        print("File already exists")

if __name__ == '__main__':
    mkdirp('C:/parent/test')
```
