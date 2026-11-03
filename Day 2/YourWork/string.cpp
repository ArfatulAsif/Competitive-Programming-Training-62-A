#include<bits/stdc++.h>
using namespace std;

int main()
{

    string sentence = "Ami Mahmudul Hasan Mehdi";


    string sentenceforsort = sentence;
    sort(sentenceforsort.begin(), sentenceforsort.end());
    cout << sentenceforsort << endl;

    string sentenceforreverse = sentence;
    reverse(sentenceforreverse.begin(), sentenceforreverse.end());
    cout << sentenceforreverse << endl;

    cout << "a appeared " << count(sentence.begin(), sentence.end(), 'a') << " times.";


    

    return 0;
}