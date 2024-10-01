import os
import shutil

def main():
    try:
        # Rename input.txt to output.txt
        os.rename("input.txt", "output.txt"))

        # Rename docs directory to mydocs
        shutil.move("docs", "mydocs")

        # Rename input.txt to output.txt in the root directory
        os.rename("/input.txt", "/output.txt"), ignore_error=True)
        
        # Rename docs directory to mydocs in the root directory
        shutil.move("docs", "mydocs"), ignore_error=True)

    except Exception as e:
        print(f"File move error: {str(e)}"))

if __name__ == "__main__":
    main()