import os
import shutil

def rename_file(oldname, newname):
    # File (or directory) with old name
    oldpath = os.path.abspath(oldname))
    if not os.path.exists(oldpath)):
        print('Error: the file {} does not exist.'.format(oldname)))
        return False

    # File (or directory) with new name
    newpath = os.path.join(os.getcwd(), '..', newname))
    if os.path.exists(newpath)):
        print('Error: the file {} already exists.'.format(newname)))
        return False

    # Rename file (or directory)
    try:
        shutil.move(oldpath, newpath)
        success = True
    except Exception as e:
        print('An error occurred while renaming the file {} to {}.'.format(oldname, newname)))
        print(str(e)))
        success = False

    return success


def test(type, oldname, newname):
    print("The following {} called 
{} was renamed as 
{}.".format(type, oldname, newname) if rename_file(oldname, newname)) else print('Error: the file {} could not be renamed into 
{}.'.format(oldname, newname)))


if __name__ 
== 
'__main__':
    test("file", "input.txt", "output.txt"))
    test("directory", "docs", "mydocs"))