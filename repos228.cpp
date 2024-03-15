#include <iostream>
#include <vector>


std::vector<int> findElementsInRange(int matrix[][3], int rows, int cols, int lowerBound, int upperBound) {
    std::vector<int> result;

   
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            
            if (matrix[i][j] >= lowerBound && matrix[i][j] <= upperBound) {

                result.push_back(matrix[i][j]);
            }
        }
    }

    return result;
}

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS] = { {1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9} };
    int lowerBound = 3;
    int upperBound = 7;

    std::cout << "Elements in range [" << lowerBound << ", " << upperBound << "]:" << std::endl;

    std::vector<int> result = findElementsInRange(matrix, ROWS, COLS, lowerBound, upperBound);

    if (result.empty()) {
        std::cout << "There are no items in the specified range." << std::endl;
    }
    else {
        for (int element : result) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
