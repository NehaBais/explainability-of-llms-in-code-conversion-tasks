import difflib


def compare(str1, str2):
    print(
        "{0:7} {1:2d} {2:2d} {3:2d} {4:2d} {5:2d} {6:2d} {7}".format(
            str1,
            (str1 == str2),
            (str1 != str2),
            (str1 > str2),
            (str1 < str2),
            (str1 >= str2),
            (str1 <= str2),
            str2,
        )
    )


def comparecase(str1, str2):
    print(
        "{0:7} {1:2d} {2:2d} {3:2d} {4:2d} {5:2d} {6:2d} {7} ignoring case".format(
            str1,
            (str1.lower() == str2.lower()),
            (str1.lower() != str2.lower()),
            (str1.lower() > str2.lower()),
            (str1.lower() < str2.lower()),
            (str1.lower() >= str2.lower()),
            (str1.lower() <= str2.lower()),
            str2,
        )
    )


if __name__ == "__main__":
    print("eq , ne , gt , lt , ge , le")
    strings = [
        "ball",
        "bell",
        "ball",
        "ball",
        "YUP",
        "YEP",
        "ball",
        "BELL",
        "ball",
        "BALL",
        "YUP",
        "yep",
        "ball",
        "BELL",
        "ball",
        "BALL",
        "YUP",
        "yep",
    ]
    for i in range(0, len(strings), 2):
        compare(strings[i], strings[i + 1])
        comparecase(strings[i], strings[i + 1])
