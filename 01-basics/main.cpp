#include <iostream>
using namespace std;

// To use the microsoft c++ compiler, open developer powershell for VS 2022 from win + s key and navigate to the directory of this folder by using "cd" commands. Then type "code ." to open VS Code. Now VS Code has access to environment variables of MSVC or Microsoft C++ compiler
// Now we can go to terminal option at the top of VS Code and select "configure tasks". We now see the option of "cl.exe Build active file" which is the Microsoft C++ compiler
// Now typing "cl.exe" in terminal will give us output
int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}