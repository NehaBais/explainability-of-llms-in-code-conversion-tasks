import os
def mkdir_p(path):
 if os.path.exists(path):
 return
 try:
 os.makedirs(path)
 except OSError as e:
 # Mask any errors that result from the directory existing
 if e.errno != 17:
 raise