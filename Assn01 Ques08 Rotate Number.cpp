// Rotate Number

#include <iostream>
using namespace std;

int main()
{
    int num, rotate;
    cin >> num >> rotate;

    int length = 0;

    int num_length = num;
    while (num_length > 0)
    {
        length++;
        num_length /= 10;
    }

    int arrint[length];

    int position = length-1;
    while (num > 0)
    {
        int start = num % 10;
        num /= 10;
        arrint[position] = start;
        position--;
    }
    
    while (rotate > 0)
    {        
        int bucket = arrint[length-1];
        for (int i = length; i > 0; i--)
        {
            arrint[i] = arrint[i-1];
        }
        arrint[0] = bucket;
        rotate--;
    }

    for (int j = 0; j < length; j++)
    {
        cout << arrint[j];   
    }
    return 0;
}