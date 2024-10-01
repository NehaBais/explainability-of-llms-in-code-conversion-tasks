from pathlib import Path


def mkdirp(p):
    p = Path(p)
    try:
        if not p.exists():
            p.mkdir(parents=True)
        return "Directory created"
    except FileExistsError as e:
        print(e)
        return str(e)
