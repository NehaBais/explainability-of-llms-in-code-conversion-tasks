# Import the necessary library
from typing import List


def prepend_strings(strings: List[str], prefix: str) -> str:
    """
    This function takes a list of strings and a prefix string,
    then returns a new string with each element from the list prepended by the prefix.

    :param strings: List of strings to be prepended
    :param prefix: The prefix string to prepend to each element
    :return: A new string with each element from the list prepended by the prefix
    """
    return " ".join([prefix + s for s in strings])


# Main function
def main():
    my_strings = ["prepended to", "my string"]
    prepended = prepend_strings(my_strings, "Hello ")
    print(prepended)


if __name__ == "__main__":
    main()
