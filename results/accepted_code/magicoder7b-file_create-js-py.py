import os


def fct(err):
    if err is not None:
        print(err)


try:
    with open("output.txt", "w") as file:
        pass  # empty content creation
except IOError as e:
    fct(e)

try:
    os.makedirs("/docs", exist_ok=True)
except OSError as e:
    fct(e)

try:
    with open("/output.txt", "w") as file:
        pass  # empty content creation
except IOError as e:
    fct(e)

try:
    os.makedirs("docs", exist_ok=True)
except OSError as e:
    fct(e)
