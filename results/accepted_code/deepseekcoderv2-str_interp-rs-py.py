def main():
    print("Mary had a {} lamb".format("little"))

    # You can specify order
    print("{1} had a {0} lamb".format("little", "Mary"))

    # Or named arguments if you prefer
    print("{name} had a {adj} lamb".format(adj="little", name="Mary"))


if __name__ == "__main__":
    main()
