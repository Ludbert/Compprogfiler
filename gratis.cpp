#include <iostream>
using namespace std;

/*
int getnumberrrrrrrrr(bool firsttime)
{
    if (firsttime)
    {
        cout << "Write two whole numbers separated by a space: ";
    }
    int n, k;
    cin >> n >> k;

    if (n % 2 != 0 || k % 2 != 0)
    {
        cout << "You did not enter two even numbers. Try again\n";
        return getnumberrrrrrrrr(false);
    }
    else
    {
        return n, k;
    }
}*/

int main()
{
    int n, k;
    cin >> n >> k;
    cout << '\n';
    string s;
    cin >> s;
    //cout << '\n' << s << '\n';
    int halfdifference = (n-k) / 2;
    //cout << halfdifference << '\n';
    int adjustment1 = 0;
    int adjustment2 = 0;
    for (int l = 1; l < n+1; l++)
    {
        int corrected = (l-adjustment1)-adjustment2;
    
        if (s[corrected] == '(' && adjustment1!=halfdifference)
        {
            s.erase(corrected, 1);
            adjustment1++;
            //cout << adjustment1 << 'e'<< '\n';
        }
        if (s[corrected] == ')' && adjustment2!=halfdifference)
        {
            s.erase(corrected, 1);
            adjustment2++;
            //cout << adjustment2 << 't' << '\n';
        }
        if (adjustment1 == halfdifference && adjustment2 == halfdifference)
        {
            break;
        }
    }
    cout << s << '\n';
    return 0;
    /*
    string output;
    string spliceput;
    bool ksaved = false;
    for (int i = 0; i < n; i++)
    {
        output += "()";
        if (!ksaved && i == k-1)
        {
            spliceput = output;
            ksaved = true;
        }
    }

    cout << output << ' ' << spliceput << '\n';
    return 0; */
}



// Compile: g++ gratis.cpp -o gratis