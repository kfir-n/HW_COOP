//
// Created by Kfir Nudelman on 03/03/2024.
//
#include <string>
#include <iostream>
using namespace std;

//question 1
/*
float WeightedAverage(float x[], float w[], size_t l);
int main() {
    float a[] = { 2.0, 3.0, 4.0, 5.0 };
    float b[] = { 0.2, 0.3, 0.4, 0.5 };

    int l = sizeof(a) / sizeof(float);

    float c = WeightedAverage(a, b, l);
    cout << c;
}

 float WeightedAverage(float x[], float w[], size_t l) {
    float a = 0.0;
    float b = 0.0;

    for (int i = 0; i < l; i++) {
        a += x[i] * w[i];
        b += w[i];

    }

    return a / b;
}
*/

//question 2
/*
bool IsArithmeticProgression(int* arr, int size = 3);
int main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    if (size < 3) { size = 3; }
    int * arr = new int[size];
    cout << "enter the numbers: \n";
    for (int i = 0; i < size; i++) {
        cout << "enter a number: ";
        cin >> arr[i];
    }
    if (IsArithmeticProgression(arr, size) == 1)
    {
        cout << "this id good!";
    }
    else
    {
        cout << "nope";
    }
}

bool IsArithmeticProgression(int* arr, int size = 3) {
    int gap = arr[1] - arr[0];
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i + 1] - arr[i] != gap)
        {
            return false;
        }
    }
    return true;
} */

//question 3
/*
 string * splitSentence(string sentence, string * words, int& size);
int main() {
    string sentence = "this is the example";
    string* words{};
    int size;

    words = splitSentence(sentence, words, size);

    cout << "the words in the string: " << endl;
    for (int i = 0; i < size; i++) {
        cout << words[i] << endl;
    }
    cout << "now twice: " << endl;
    for (int i = 0; i < size; i++) {
        cout << multi(words[i]) << endl;
    }

    delete[] words;

    return 0;
}

 string * splitSentence(string sentence, string * words, int& size) {
    size = 0;
    for (char c : sentence) {
        if (c == ' ') {
            size++;
        }
    }
    size++;
    words = new string[size];
    int wordIndex = 0;
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            words[wordIndex] = word;
            word = "";
            wordIndex++;
        }
        else {
            word += c;
        }
    }
    words[wordIndex] = word;
    return words;
}

string multi(string word)
{
    string word2 = word;
    word.append(word2);
    return word;
}

*/