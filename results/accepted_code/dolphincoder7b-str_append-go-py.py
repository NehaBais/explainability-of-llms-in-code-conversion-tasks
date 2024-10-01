from io import StringIO


def main():
    # Initialize a string buffer
    s = StringIO()

    # Append strings using write function
    s.write("foo")
    s.write("bar")

    # Print content of the string buffer
    print(s.getvalue())
