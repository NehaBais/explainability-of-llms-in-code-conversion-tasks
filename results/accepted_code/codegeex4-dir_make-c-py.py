import os


def create_directory(path):
    # Check if path already exists. If it does, return successfully.
    if os.path.exists(path):
        return

    # Split the path by '/' and iterate over each directory name to create them recursively.
    parts = [p for p in path.split("/") if p]

    for i in range(1, len(parts) + 1):
        # Create a temporary path with the current segment
        temp_path = "/".join(parts[:i])

        # Check if this part of the path exists. If not, create it.
        if not os.path.exists(temp_path):
            os.makedirs(temp_path)


if __name__ == "__main__":
    import sys

    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <path>")
        sys.exit(1)

    path = sys.argv[1]
    create_directory(path)
