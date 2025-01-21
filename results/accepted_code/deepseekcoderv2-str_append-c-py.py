def main():
    str = "Good Morning"
    cstr = " to all"
    cstr2 = " !!!"

    # Check if the allocated space is sufficient
    if len(str) + len(cstr) + len(cstr2) < 24:
        # Append the strings using the most idiomatic way in Python
        str += cstr

        # Alternatively, you can use f-string for concatenation
        str = f"{str}{cstr2}"

        print(str)


if __name__ == "__main__":
    main()
