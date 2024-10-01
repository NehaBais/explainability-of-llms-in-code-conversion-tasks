Python code here - 
```python
import os
print(os.getcwd())
file_path = r'C:\Users\shobh\OneDrive\Desktop\python\Assignment20\docs\input.txt'
isFile=False
if (os.path.exists(r"C:\Users\shobh\OneDrive\Desktop\python\Assignment20\docs")):
    print('yes, the directory exists')
else: 
    print("The path does not exist")  
if os.path.isfile(file_path):
    isFile=True
print(isFile)
```

