import os
def mkdir_p(path):
 try:
 os.makedirs(path, mode=0o770)
 except OSError as e:
 if e.errno != errno.EEXIST or not os.path.isdir(path):
 raise