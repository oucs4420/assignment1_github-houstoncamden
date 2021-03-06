#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main(int argc, char *argv[])
{
    // just to get you started, this is how to refer to the arguments that were passed
    //for (int arg = 0; arg < argc; ++arg)
    //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;

    cout << "program: ./filesize" << endl;
    for (int i = 1; i < argc; i++)
    {
        ifstream ifs;

        ifs.open(argv[i]);

        if (!ifs)
        {
            cout << " " << argv[i] << ": "
                 << "-1" << endl;
        }
        else{

        string line;
        int numlines = 0;

        while (getline(ifs, line))
        {
            numlines++;
        }

        cout << " " << argv[i] << ": " << numlines << endl;
        }
    }

    exit(0); // this means that the program executed correctly!
}
