def strcmp(s1, s2):
    if len(s1) == len(s2):
        return True if (s1 == s2) else False
    else:
        return 1 if (len(s1) > len(s2)) else -1


def strcasecmp(s1, s2):
    if len(s1) == len(s2):
        return True if (s1.lower() == s2.lower()) else False
    else:
        return 1 if (len(s1) > len(s2)) else -1


def main():
    strings = ["ball", "YUP", "yep"]
    for i in range(0, len(strings) - 1):
        print(
            f"{strings[i]}{strcmp(strings[i], strings[i+1])}\t{strcasecmp(strings[i], strings[i+1])}"
        )


if __name__ == "__main__":
    main()
