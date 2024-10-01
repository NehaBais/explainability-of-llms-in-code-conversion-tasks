import shutil

# Rename "input.txt" to "output.txt" and "docs" to "mydocs" in current directory
try:
    shutil.move("input.txt", "output.txt")
    shutil.move("docs", "mydocs")

    # Same as above but for root directory
    shutil.move("/input.txt", "/output.txt")
    shutil.move("/docs", "/mydocs")
except Exception:
    print("File move error")
