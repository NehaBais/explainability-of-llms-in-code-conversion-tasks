import os


def fct(err):
    if err:
        print(err)


os.makedirs("here/docs", exist_ok=True)
with open("here/output.txt", "w"):
    pass
os.makedirs("/docs", exist_ok=True)
with open("/output.txt", "w"):
    pass
