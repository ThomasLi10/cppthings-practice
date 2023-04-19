#include <iostream>
using namespace std;

class BasicException
{
public:
    const char *Where() { return "BasicException..."; }
};

class FileSysException : public BasicException
{
public:
    const char *Where() { return "FileSysException..."; }
};

class FileNotFound : public FileSysException
{
public:
    const char *Where() { return "FileNotFound..."; }
};

class DiskNotFound : public FileSysException
{
public:
    const char *Where() { return "DiskNotFound..."; }
};

int main()
{
    try
    {
        //throw FileSysException();
        throw DiskNotFound();
    }
    catch (DiskNotFound p)
    {
        cout << p.Where() << endl;
    }
    catch (FileNotFound p)
    {
        cout << p.Where() << endl;
    }
    catch (FileSysException p)
    {
        cout << p.Where() << endl;
    }
    catch (BasicException p)
    {
        cout << p.Where() << endl;
    }
}
