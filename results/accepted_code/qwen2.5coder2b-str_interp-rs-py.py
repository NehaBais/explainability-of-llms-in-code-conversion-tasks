def main():
    # Using str.format()
    print("Mary had a {} lamb".format("big"))

    # Using named arguments
    print("{name} had a {adj} lamb".format(name="little", adj="big"))


if __name__ == "__main__":
    main()
