Binary Search:

Binary search is a search algorithm that efficiently finds a specific value in a sorted array or list. It follows the divide and conquer paradigm, repeatedly dividing the search space in half until the target element is found or the search space is empty.

Algorithm Steps:

Initialize Pointers:

Set two pointers, low and high, initially pointing to the first and last elements of the array.
Calculate Midpoint:

Calculate the midpoint between low and high: mid = (low + high) / 2.
Compare with Target:

Compare the element at the midpoint with the target value.
If the element is equal to the target, the search is successful, and the index is found.
If the element is less than the target, update low to mid + 1 and repeat the search in the right half.
If the element is greater than the target, update high to mid - 1 and repeat the search in the left half.
Repeat Until Found or Empty:

Repeat steps 2-3 until the target is found or the low pointer surpasses the high pointer, indicating that the element is not in the array.
Key Features:

Efficiency: Binary search has a time complexity of O(log n), making it significantly more efficient than linear search for large datasets.

Precondition: The array must be sorted for binary search to work correctly.

Divide and Conquer: Binary search follows the divide and conquer strategy, continually reducing the search space by half.

Iterative or Recursive: Binary search can be implemented using both iterative and recursive approaches.