import os
def mkdir_p(path):
 try:
 os.makedirs(path)
 except OSError:
 if not os.path.exists(path):
 raise