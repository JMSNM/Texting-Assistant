#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

struct word
{
    string phrase;
    int freq = 0;
};

bool compareByFreq(const word &a, const word &b)
{
    return a.freq > b.freq; // Ascending order of frequencies
}

bool compareByWords(const word &a, const word &b)
{
    return a.phrase < b.phrase;
}

vector<string> options;

void predict(vector<word> data)
{

    if (data.size() < 4)
    {

        for (int i = 0; i < data.size(); i++)
        {
            cout << i + 1 << ": " << data[i].phrase << "   ";
            options.push_back(data[i].phrase);
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << ": " << data[i].phrase << "   ";
            options.push_back(data[i].phrase);
        }
    }
}

int main()
{
    vector<word> words;
    word input;
    char ch;
    string phrase;

    cout << "Create dataset: ";
    while (cin.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            if (!input.phrase.empty())
            {
                bool exists = false;
                for (int i = 0; i < words.size(); i++)
                {
                    if (input.phrase == words[i].phrase)
                    {
                        exists = true;
                        words[i].freq++;
                        break;
                    }
                }

                if (!exists)
                {
                    input.freq = 1;
                    words.push_back(input);
                }

                input.phrase.clear();
            }
        }
        else
        {
            input.phrase += ch;
        }

        if (ch == '\n')
        {
            break;
        }
    }

    
    vector<string> sentence;
    system("CLS");
    cout << "Write away: ";

    while (true)
    {
        options.clear();
        cin >> phrase;
        sentence.push_back(phrase);
        cout << "\n\n\n\n\n\n\n\n\n";
        // sort(words.begin(), words.end(), compareByFreq);
        sort(words.begin(), words.end(), compareByWords);
        predict(words);

        bool exists = false;
        for (int i = 0; i < words.size(); i++)
        {
            if (phrase == words[i].phrase)
            {
                exists = true;
                words[i].freq++;
                break;
            }
        }

        if (!exists)
        {
            input.freq = 1;
            input.phrase = phrase;
            words.push_back(input);
        }

        int choice;
        cin >> choice;

        system("CLS");
        cout << "Write away: ";
        for (int i = 0; i < sentence.size(); i++)
        {
            cout << sentence[i] << " ";
        }
        switch (choice)
        {
        case 1:
        {
            cout << options[0] << " ";
            sentence.push_back(options[0]);
        }
        break;
        case 2:
        {

            cout << options[1] << " ";
            sentence.push_back(options[1]);
        }
        break;
        case 3:
        {

            cout << options[2] << " ";
            sentence.push_back(options[2]);
        }
        break;
        case 4:
        {

            cout << options[3] << " ";
            sentence.push_back(options[3]);
        }
        break;

        default:
            cout << "Invalid option selected.";
            return 0;
            break;
        }
    }

    return 0;
}
