#include <iostream>
#include <string>
using namespace std;
std::string add_binary_strings(const std::string& s1, const std::string& s2)
{
    std::string result;
    int carry = 0;
    int i = s1.length() - 1;
    int j = s2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int a = (i >= 0) ? s1[i] - '0' : 0;
        int b = (j >= 0) ? s2[j] - '0' : 0;
        int sum = a + b + carry;

        result = std::to_string(sum % 2) + result;
        carry = sum / 2;

        i--;
        j--;
    }

    return result;
}

int main()
{
    std::string s1 = "10101";
    std::string s2 = "11010";
    std::string result = add_binary_strings(s1, s2);
    std::cout << result << std::endl;
    return 0;
}