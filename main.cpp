#include <iostream>
#include <cassert>

int linear_search(int *array, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int binary_search(int *array, int size, int target) {
    int begin = 0;
    int end = size;
    while (begin < end) {
        int middle = (begin + end) / 2;
        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            begin = middle + 1;
        } else if (array[middle] > target) {
            end = middle;
        }
    }
    return -1;
}

int main() {
    
    int size, target;
    int *ptr;
    
    // linear search test #1
    
    size = 0;
    target = 0;
    ptr = nullptr;
    assert(linear_search(ptr, size, target) == -1);
    std::cout << "Successful completion of linear search test #1" << std::endl;
    
    // linear search test #2
    
    size = 1;
    target = 1;
    ptr = new int[size] {target};
    assert(linear_search(ptr, size, target) == 0);
    delete[] ptr;
    std::cout << "Successful completion of linear search test #2" << std::endl;
    
    // linear search test #3
    
    size = 10;
    target = 7;
    ptr = new int[size] {3, 1, 5, target, 6, 9, 2, 0, 4, 8};
    assert(linear_search(ptr, size, target) == 3);
    delete[] ptr;
    std::cout << "Successful completion of linear search test #3" << std::endl;
    
    // linear search test #4
    
    size = 10;
    target = 10;
    ptr = new int[size] {3, 1, 5, 7, 6, 9, 2, 0, 4, 8};
    assert(linear_search(ptr, size, target) == -1);
    delete[] ptr;
    std::cout << "Successful completion of linear search test #4" << std::endl;
    
    // linear search test #5
    
    size = 5;
    target = 0;
    ptr = new int[size] {target, target, target, target, target};
    assert(linear_search(ptr, size, target) == 0);
    delete[] ptr;
    std::cout << "Successful completion of linear search test #5" << std::endl;
    
    // binary search test #1
    
    size = 0;
    target = 0;
    ptr = nullptr;
    assert(binary_search(ptr, size, target) == -1);
    std::cout << "Successful completion of binary search test #1" << std::endl;
    
    // binary search test #2
    
    size = 1;
    target = 1;
    ptr = new int[size] {target};
    assert(binary_search(ptr, size, target) == 0);
    delete[] ptr;
    std::cout << "Successful completion of binary search test #2" << std::endl;
    
    // binary_search test #3
    
    size = 10;
    target = 3;
    ptr = new int[size] {0, 1, 2, target, 4, 5, 6, 7, 8, 9};
    assert(binary_search(ptr, size, target) == 3);
    delete[] ptr;
    std::cout << "Successful completion of binary search test #3" << std::endl;
    
    // binary_search test #4
    
    size = 10;
    target = 10;
    ptr = new int[size] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    assert(binary_search(ptr, size, target) == -1);
    delete[] ptr;
    std::cout << "Successful completion of binary search test #4" << std::endl;
    
    // binary search test #5
    
    size = 5;
    target = 0;
    ptr = new int[size] {target, target, target, target, target};
    assert(binary_search(ptr, size, target) == 2);
    delete[] ptr;
    std::cout << "Successful completion of binary search test #5" << std::endl;
}
