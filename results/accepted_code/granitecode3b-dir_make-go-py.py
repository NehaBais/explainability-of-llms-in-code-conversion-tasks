import os
def mkdir_p(path):
 try:
 os.makedirs(path)
 except OSError as exc:
 if exc.errno == os.errno.EEXIST and os.path.isdir(path):
 pass
 else:
 raise