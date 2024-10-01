import os
def mkdirp(path):
 if not os.path.exists(path):
 try:
 os.makedirs(path)
 except OSError as e:
 if e.errno != os.errno.EEXIST:
 raise