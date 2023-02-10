#include <iostream>

using namespace std;

main()
{

    string word;

    cout << "ENTER STRING: ";
    getline(cin, word);

    string input = "";

    for (int idx = 0; word[idx] != '\0'; idx += 1)
    {
        if ((word[idx] != 'a' && word[idx] != 'e' && word[idx] != 'i' && word[idx] != 'o' && word[idx] != 'u'))
        {
            input = input + word[idx];
        }
    }
    cout << input;
}