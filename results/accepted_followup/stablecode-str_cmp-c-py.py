def compare(a, b):
    print(f"{a:<20} ==== {b:<20} : {bool(0==strcmp((A),(B))))")


def compare_case(a, b):
    print(f"{a:<20} ignoring case ==== {b:<20} ignoring case : {bool(0==strcasecmp((A),(B))))"})


# Example usage
a = "./c"
b = "./C"
compare(a, b)
compare_case(a, b)