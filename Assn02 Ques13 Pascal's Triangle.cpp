// pattern 13

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int loop = 1; loop <= num; loop++)
    {
        for (int flag = 1; flag <= loop; flag++)
        {
            int comb = 1;

            for (int multi = 1; multi < loop; multi++)
            {
                comb *= multi;
            }
            for (int div1 = (loop - flag); div1 > 0; div1--)   //permutation till here
            {
                comb /= div1;
            }
            for (int div2 = flag - 1; div2 > 0; div2--)    //combination here
            {
                comb /= div2;
            }

            cout << comb << "   ";
        }
        cout << endl;
    }

    return 0;
}
