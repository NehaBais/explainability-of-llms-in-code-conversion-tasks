def create_file(fn):
 try:
 with open(fn, 'w') as f:
 pass
 except Exception as e:
 print(e)
create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")