#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    int arr[rows][cols];
    std::cout << "Enter " << rows * cols << " elements:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "You entered:" << std::endl;
    for (const auto& row : arr) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}