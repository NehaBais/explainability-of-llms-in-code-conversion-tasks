import os


def mkdirp(p):
    p = os.path.normpath(p)
    try:
        os.makedirs(p, exist_ok=True)
        return True
    except Exception as e:
        if "ENOENT" in str(e):
            parent_dir = os.path.dirname(p)
            mkdirp(parent_dir)
            try:
                os.makedirs(p, exist_ok=True)
                return True
            except Exception as e:
                print(f"Error creating directory {p}: {e}")
                return False
        else:
            print(f"Error creating directory {p}: {e}")
            return False


# Example usage:
mkdirp("./path/to/dir")
