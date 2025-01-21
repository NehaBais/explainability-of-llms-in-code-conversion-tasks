import os
def mkdir_p(path):
 if os.path.isdir(path):
 pass
 else:
 try:
 os.makedirs(path)
 except OSError as exc:
 if exc.errno == os.errno.EEXIST:
 pass
 else:
 raise