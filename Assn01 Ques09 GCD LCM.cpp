// GCD LCM

#include <iostream>
using namespace std;

int main()
{// GCD LCM
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    for (int hcf = min(num1, num2); hcf >= 1; hcf--)
    {
        if ((num1 % hcf == 0) && (num2 % hcf == 0))
        {
            cout << "HCF = " << hcf << endl;
            break;
        }
    }

    for (int lcm = max(num1, num2); lcm >= max(num1, num2); lcm++)
    {
        if ((lcm % num1 == 0) && (lcm % num2 == 0))
        {
            cout << "LCM = " << lcm << endl;
            break;
        }
    }

    return 0;
}
    int num1, num2;
    cin >> num1 >> num2;

    for (int i = min(num1, num2); i >= 1; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            cout << i << endl;
            break;
        }
    }

    bool lcm_case = false;
    int lcm = max(num1, num2);
    while (lcm_case != true)
    {
        if ((num1 % lcm == 0) && (num2 % lcm == 0))
        {
            cout << lcm;
            lcm_case = true;
        }
        lcm++;
    }

    return 0;
}
