# Arrays — TakeUForward Notes
> **Source:** [Arrays Intro Video — take U forward](https://youtu.be/37E9ckMDdTk?si=WttsPBahP6Ux9P0h)  
> **Topics Covered:** Array Basics · Largest Element · Second Largest Element · Check if Sorted · Remove Duplicates from Sorted Array

---

## 1. Array Basics

- An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.
- Indexing starts from `0`.
- Declaration in C++:
  ```cpp
  int arr[5] = {1, 2, 3, 4, 5};
  ```
- **Size** of array = `n * sizeof(data_type)` bytes.
- Accessing any element takes **O(1)** time (random access via index).
- **Max_Size** of array can be `10^6` inside `main()` and `10^7` if `Globely` decleared.

---

## 2. Largest Element in an Array

### Approach
- Initialize `largest = arr[0]`.
- Traverse the array; update `largest` if `arr[i] > largest`.

```cpp
int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

---

## 3. Second Largest Element (Without Sorting)

### Problem
Find the second largest element in an array **without sorting** it.

### Brute Force — O(n log n)
- Sort the array in descending order.
- Return the **first element that is not equal to the largest**.
- ⚠️ Handle duplicates (e.g., `[5, 5, 4]` → second largest is `4`, not `5`).

### Better — O(2n)
- **Pass 1:** Find the largest element.
- **Pass 2:** Find the largest element that is **strictly less than** the largest.

```cpp
int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    // Pass 1: find largest
    for (int i = 0; i < n; i++)
        largest = max(largest, arr[i]);
    
    // Pass 2: find second largest
    for (int i = 0; i < n; i++)
        if (arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    
    return secondLargest; // returns INT_MIN if no second largest exists
}
```

### Optimal — O(n), Single Pass ✅

```cpp
int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // old largest becomes 2nd
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
```

**Dry Run Example:**

| arr[i] | largest | secondLargest |
|--------|---------|---------------|
| —      | INT_MIN | INT_MIN       |
| 1      | 1       | INT_MIN       |
| 2      | 2       | 1             |
| 4      | 4       | 2             |
| 7      | 7       | 4             |
| 5      | 7       | 5 ❌ (5 > 4 so update) → 5 |
| 3      | 7       | 5             |

> **Result:** Second largest = **5**

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

### Edge Cases
- All elements are the same → no second largest (return `-1` or `INT_MIN`).
- Array has only 1 element → no second largest.

---

## 4. Check if Array is Sorted

### Problem
Return `true` if the array is sorted in **non-decreasing order**.

### Approach

```cpp
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

> **Note:** Equal adjacent elements (`arr[i] == arr[i-1]`) are allowed in non-decreasing order.

---

## 5. Remove Duplicates from Sorted Array

### Problem
Given a **sorted** array, remove duplicates **in-place** so each element appears only once. Return the new length `k`.

> LeetCode #26 | The array must be modified **in-place** with **O(1)** extra space.

### Brute Force — Using a Set — O(n log n) + O(n)
- Insert all elements into a `set` (automatically removes duplicates).
- Copy back to the array.

```cpp
int removeDuplicates(vector<int>& arr) {
    set<int> st(arr.begin(), arr.end());
    int i = 0;
    for (int x : st) arr[i++] = x;
    return st.size();
}
```

⚠️ Uses **O(n) extra space** — not ideal for interviews.

### Optimal — Two Pointer Approach ✅ — O(n), O(1)

**Key Insight:** In a sorted array, all duplicates are **adjacent**. Use a slow pointer `i` to track the position of the last unique element, and a fast pointer `j` to scan ahead.

```cpp
int removeDuplicates(vector<int>& arr) {
    int i = 0;  // slow pointer (last unique position)
    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];  // place unique element
        }
        // if arr[j] == arr[i], skip (duplicate)
    }
    return i + 1;  // length of unique elements
}
```

**Dry Run Example:**

```
arr = [1, 1, 2, 2, 3, 4, 4, 5]
       i
          j
```

| j | arr[j] | arr[i] | Action            | arr (front)        |
|---|--------|--------|-------------------|--------------------|
| 1 | 1      | 1      | Duplicate, skip   | [1, ...]           |
| 2 | 2      | 1      | Unique → i=1, write | [1, 2, ...]      |
| 3 | 2      | 2      | Duplicate, skip   | [1, 2, ...]        |
| 4 | 3      | 2      | Unique → i=2, write | [1, 2, 3, ...]   |
| 5 | 4      | 3      | Unique → i=3, write | [1, 2, 3, 4, ...] |
| 6 | 4      | 4      | Duplicate, skip   | [1, 2, 3, 4, ...]  |
| 7 | 5      | 4      | Unique → i=4, write | [1, 2, 3, 4, 5] |

**Return:** `i + 1 = 5` ✅

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

### Key Points for Interviews
- Always clarify: "in-place modification" vs "extra space allowed"
- The elements **beyond index k** don't matter — only the first `k` elements are checked
- This **only works on sorted arrays** — for unsorted, use a hash set

---

## Summary Table

| Problem | Brute Force | Optimal | Space |
|---------|------------|---------|-------|
| Largest Element | O(n log n) sort | O(n) | O(1) |
| Second Largest | O(n log n) sort | O(n) single pass | O(1) |
| Check if Sorted | — | O(n) | O(1) |
| Remove Duplicates | O(n) set | O(n) two-pointer | O(1) |

---

## Quick Revision Pointers

- 🔑 **Second Largest:** Update `secondLargest` whenever you update `largest`, or when `arr[i]` is between them.
- 🔑 **Two Pointer Pattern:** Slow pointer = result builder, Fast pointer = scanner. Common in array & string problems.
- 🔑 **Sorted array property:** Duplicates are always adjacent → no need for hashing.
- 🔑 Always handle **edge cases**: empty array, single element, all duplicates.

---

*Notes based on TakeUForward (Striver) — Arrays Series | Step 3.1*
