#include <iostream> /* std::cout  //  std::cin  

                    std::boolalpha  //  std::noboolalpha */
#include <stdio.h>  /* printf, NULL */
#include <stdlib.h> /* srand, rand */

#include <cmath>  //  <math.h>  /* pow */
#include <string>  // std::string
#include <vector>   // std::vector

#include <time.h>   /* time */

using namespace std;

// Define is_palindrome() here:
bool is_palindrome(std::string word)
{

    string rev;

    for (int i = word.size() - 1; i == 0; i--)
    {
        rev += word[i];


    }

if (rev == word) {
return true;
}
else {

    return false;
}





}

int main()
{

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";
}