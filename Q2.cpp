#include <bits/stdc++.h>

#include <array>
#include <iostream>
#include <vector>

std::array<std::vector<int>, 2> sortIntoOddListAndEvenList(
    int unsortedNumbers[])
{
    std::vector<int> evenNumberList;
    std::vector<int> oddNumberList;
    std::array<std::vector<int>, 2> result;

    for (int i = 0; i < sizeof(unsortedNumbers); i++) {
        // its an even number
        if (unsortedNumbers[i] % 2 == 0) {
            evenNumberList.push_back(unsortedNumbers[i]);
        }
        else {
            oddNumberList.push_back(unsortedNumbers[i]);
        };
    }

    // or (auto i : oddNumberList) std::cout << i << ' ';

    std::sort(evenNumberList.begin(), evenNumberList.end());
    std::sort(oddNumberList.begin(), oddNumberList.end());

    result[0] = evenNumberList;
    result[1] = oddNumberList;
    return result;
}

int main()
{
    int unsorted_number[6] = {9, 21, 2, 0, 4, 3};
    std::array<std::vector<int>, 2> testResult =
        sortIntoOddListAndEvenList(unsorted_number);

    // print out event number
    for (auto i : testResult[0]) std::cout << i << ' ';
    // print out odd number
    for (auto i : testResult[1]) std::cout << i << ' ';

    return 0;
}
