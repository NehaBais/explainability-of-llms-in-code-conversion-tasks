import os
def create_files():
 try:
 # Create output.txt in the current working directory
 with open('output.txt', 'w') as f:
 pass
 
 # Create output.txt in the root directory
 with open('/output.txt', 'w') as f:
 pass
 
 # Create docs directory in the current working directory
 os.makedirs('docs')
 
 # Create docs directory in the root directory
 os.makedirs('/docs')
 
 except Exception as e:
 print(e)
 
create_files()