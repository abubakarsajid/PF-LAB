#include <iostream>

using namespace std;

main()
{

    string word;

    cout << "ENTER WORD: ";
    getline(cin, word);

    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] >= 'a' && word[idx] <= 'z')
        {
            word[idx] = word[idx] + 1;
        }
    }
    cout << word;
}