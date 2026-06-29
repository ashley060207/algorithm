#include <string>
#include <vector>

using namespace std;

vector<string> SplitWord(string message) {
    vector<string> WordList;
    string W = "";
    for (int i = 0; i < message.size(); i++) {
        if (message[i] == ' ') {
            if (W.size() > 0){
                WordList.push_back(W);
                W = "";
                continue;
            }
            else{
                continue;
            }
        }

        W += message[i];
        
        if(i == message.size() - 1){
            WordList.push_back(W);
            W = "";
        }
    }

    return WordList;
}


int solution(string message, vector<vector<int>> spoiler_ranges) {
    string spoiledMessage = message;
    int answer = 0;

    for (vector i : spoiler_ranges) {
        for (int j = i[0]; j <= i[1]; j++) {
            if (spoiledMessage[j] != ' ') {
                spoiledMessage[j] = '*';
            }
        }
    }
    vector<string> words = SplitWord(message);
    vector<string> Spoiledwords = SplitWord(spoiledMessage);

    for (int i = 0; i < Spoiledwords.size(); i++)
    {
        for (char a : Spoiledwords[i]) {
            if (a == '*') {
                Spoiledwords[i] = words[i];
                int a = 0;
                for (int j = 0; j < Spoiledwords.size(); j++)
                {
                    if (Spoiledwords[j] == Spoiledwords[i])
                    {
                        a++;
                    }
                }
                if (a == 1) {
                    answer++;
                }
            }
        }
    }

    return answer;
}
