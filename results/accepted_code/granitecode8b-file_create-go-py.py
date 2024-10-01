import os
def create_file(fn):
 try:
 with open(fn, 'w') as f:
 pass
 print(f"File {fn} created!")
 except Exception as e:
 print(e)
def create_dir(dn):
 try:
 os.makedirs(dn, mode=0o777)
 print(f"Directory {dn} created!")
 except Exception as e:
 print(e)
create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")