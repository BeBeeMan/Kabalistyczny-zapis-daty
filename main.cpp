#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alph[23] = { 1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500 };
    string apfabet = "abcdefghiklmnopqrstvxyz";
    int sum = 0;
    string input = "";
    int pos = 0;
    cin >> input;
    for (int k = 0; k < input.length(); k++)
    {
        pos = 0;
        for (int i = 0; i < apfabet.length(); i++)
        {
            if (input[k] != apfabet[i])
            {
                pos++;
            }
            else
            {
                break;
            }
        }
        sum = sum + alph[pos];
    }
    cout << sum;
}

//https://pl.spoj.com/problems/JZAPKAB/
