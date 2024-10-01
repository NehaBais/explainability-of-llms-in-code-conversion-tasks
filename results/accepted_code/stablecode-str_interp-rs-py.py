def main():
    print(f"Mary had a {'little':^7} lamb")
    # You can specify order
    print(f"{1:^4} had a {0:^7} lamb")
    # Or named arguments if you prefer
    print(f"{name:^8} had a {adj:^7} lamb")


main()
