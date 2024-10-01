import os

def fct(err):
    if err: 
        print(err)

try:
    os.makedirs("docs")

    with open("output.txt", "w") as file:
        pass

    os.rename("/output.txt", "/docs/output.txt"))

    os.makedirs("/docs"))

except Exception as e:
    fct(str(e)))