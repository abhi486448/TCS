# Arrays Part-2 — TakeUForward Notes
> **Source:** [Rotate Array by K places | Union, Intersection of Sorted Arrays | Move Zeros to End — take U forward](https://youtu.be/wvcQg43_V8U?si=zanpfyaqz0RfMiaC)  
> **Topics Covered:** Left Rotate by 1 · Left Rotate by D Places · Move Zeros to End · Linear Search · Union of Two Sorted Arrays · Intersection of Two Sorted Arrays

---

## 1. Left Rotate an Array by One Place

### Problem
Shift every element one position to the left. The first element goes to the end.

```
Input:  [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
```

### Approach

```cpp
void rotateByOne(int arr[], int n) {
    int temp = arr[0];          // store first element
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];    // shift left
    arr[n - 1] = temp;          // place first element at end
}
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

---

## 2. Left Rotate an Array by D Places

### Problem
Rotate array to the left by `d` positions.

```
Input:  arr = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
```

> ⚠️ If `d >= n`, use `d = d % n` to avoid unnecessary rotations.

---

### Brute Force — Using Temp Array — O(n), O(d)

- Store first `d` elements in a temp array.
- Shift remaining `n-d` elements to the left.
- Copy temp array to the end.

```cpp
void rotateLeft(int arr[], int n, int d) {
    d = d % n;
    int temp[d];
    
    // store first d elements
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    
    // shift remaining elements left
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    
    // copy temp to end
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(d)  |

---

### Optimal — Reversal Algorithm — O(n), O(1) ✅

**Key Insight:** Three reversals give a left rotation by `d` places.

**Steps:**
1. Reverse first `d` elements
2. Reverse remaining `n-d` elements
3. Reverse the whole array

```cpp
void reverse(int arr[], int l, int r) {
    while (l < r) swap(arr[l++], arr[r--]);
}

void rotateLeft(int arr[], int n, int d) {
    d = d % n;
    reverse(arr, 0, d - 1);      // Step 1
    reverse(arr, d, n - 1);      // Step 2
    reverse(arr, 0, n - 1);      // Step 3
}
```

**Dry Run Example:**

```
arr = [1, 2, 3, 4, 5],  d = 2

Step 1: reverse(0, 1)  → [2, 1, 3, 4, 5]
Step 2: reverse(2, 4)  → [2, 1, 5, 4, 3]
Step 3: reverse(0, 4)  → [3, 4, 5, 1, 2]  ✅
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

> **Right Rotation by d** = Left Rotation by `(n - d)` places, or reverse the steps (reverse whole → reverse first n-d → reverse last d).

---

## 3. Move All Zeros to the End

### Problem
Move all `0`s to the end of the array while maintaining the **relative order** of non-zero elements. Do it **in-place**.

```
Input:  [1, 0, 2, 3, 0, 4, 0, 1]
Output: [1, 2, 3, 4, 1, 0, 0, 0]
```

---

### Brute Force — Extra Array — O(n), O(n)

```cpp
void moveZeros(int arr[], int n) {
    vector<int> temp;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0) temp.push_back(arr[i]);
    
    int k = temp.size();
    for (int i = 0; i < k; i++)  arr[i] = temp[i];
    for (int i = k; i < n; i++)  arr[i] = 0;
}
```

---

### Optimal — Two Pointer — O(n), O(1) ✅

**Key Insight:** Use a slow pointer `j` to track the first `0`, and fast pointer `i` to find non-zero elements. Swap them.

```cpp
void moveZeros(int arr[], int n) {
    int j = -1;
    // Step 1: find index of first 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) { j = i; break; }
    }
    if (j == -1) return;  // no zeros found
    
    // Step 2: swap non-zeros with position j
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
```

**Dry Run Example:**

```
arr = [1, 0, 2, 3, 0, 4]
j starts at index 1 (first zero)

i=2: arr[2]=2 ≠ 0 → swap(arr[2], arr[1]) → [1, 2, 0, 3, 0, 4], j=2
i=3: arr[3]=3 ≠ 0 → swap(arr[3], arr[2]) → [1, 2, 3, 0, 0, 4], j=3
i=4: arr[4]=0    → skip
i=5: arr[5]=4 ≠ 0 → swap(arr[5], arr[3]) → [1, 2, 3, 4, 0, 0], j=4

Result: [1, 2, 3, 4, 0, 0] ✅
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

---

## 4. Linear Search

### Problem
Find if a target element exists in the array. Return its index (or `-1` if not found).

### Approach

```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}
```

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

> **Note:** Linear search works on **both sorted and unsorted** arrays. For sorted arrays, **Binary Search** (O(log n)) is preferred.

---

## 5. Union of Two Sorted Arrays

### Problem
Given two sorted arrays `a[]` and `b[]`, return a sorted array of **all unique elements** from both arrays.

```
a[] = [1, 1, 2, 3, 4, 5]
b[] = [2, 3, 4, 4, 5, 6]
Union = [1, 2, 3, 4, 5, 6]
```

---

### Brute Force — Using a Set — O((m+n) log(m+n))

```cpp
vector<int> findUnion(int a[], int b[], int m, int n) {
    set<int> st;
    for (int i = 0; i < m; i++) st.insert(a[i]);
    for (int i = 0; i < n; i++) st.insert(b[i]);
    return vector<int>(st.begin(), st.end());
}
```

⚠️ Uses **O(m+n) extra space** for the set.

---

### Optimal — Two Pointer — O(m+n), O(m+n) ✅

**Key Insight:** Since arrays are sorted, use two pointers. Always pick the smaller element. Skip duplicates.

```cpp
vector<int> findUnion(vector<int>& a, int m, vector<int>& b, int n) {
    int i = 0, j = 0;
    vector<int> result;
    
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        } else {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }
    }
    // remaining elements of a[]
    while (i < m) {
        if (result.back() != a[i]) result.push_back(a[i]);
        i++;
    }
    // remaining elements of b[]
    while (j < n) {
        if (result.back() != b[j]) result.push_back(b[j]);
        j++;
    }
    return result;
}
```

**Dry Run Example:**

```
a = [1, 2, 3],  b = [2, 3, 4]

i=0,j=0: a[0]=1 < b[0]=2 → add 1, i=1
i=1,j=0: a[1]=2 = b[0]=2 → add 2, i=2
i=2,j=0: a[2]=3 > b[0]=2 → skip(2 already added), j=1
i=2,j=1: a[2]=3 = b[1]=3 → add 3, i=3
i=3 (done), remaining b: b[2]=4 → add 4

Result: [1, 2, 3, 4] ✅
```

| Complexity | Value    |
|------------|----------|
| Time       | O(m+n)   |
| Space      | O(m+n)   |

---

## 6. Intersection of Two Sorted Arrays

### Problem
Find elements **common to both** sorted arrays. Include duplicates if they appear in both.

```
a[] = [1, 2, 2, 3, 4]
b[] = [2, 2, 3, 5]
Intersection = [2, 2, 3]
```

---

### Brute Force — Visited Array — O(m*n), O(n)

- For each element in `a[]`, search in `b[]`.
- Use a `visited[]` array to avoid re-using elements.

```cpp
vector<int> intersection(int a[], int b[], int m, int n) {
    int visited[n] = {0};
    vector<int> result;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j] && !visited[j]) {
                result.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if (b[j] > a[i]) break; // sorted — no need to go further
        }
    }
    return result;
}
```

---

### Optimal — Two Pointer — O(m+n), O(min(m,n)) ✅

```cpp
vector<int> intersection(vector<int>& a, int m, vector<int>& b, int n) {
    int i = 0, j = 0;
    vector<int> result;
    
    while (i < m && j < n) {
        if (a[i] < b[j])       i++;         // a is smaller, move ahead
        else if (a[i] > b[j])  j++;         // b is smaller, move ahead
        else {                               // equal → common element
            result.push_back(a[i]);
            i++; j++;
        }
    }
    return result;
}
```

**Dry Run Example:**

```
a = [1, 2, 2, 3],  b = [2, 2, 3, 5]

i=0,j=0: 1 < 2 → i++
i=1,j=0: 2 = 2 → add 2, i=2, j=1
i=2,j=1: 2 = 2 → add 2, i=3, j=2
i=3,j=2: 3 = 3 → add 3, i=4, j=3
i=4 (done)

Result: [2, 2, 3] ✅
```

| Complexity | Value        |
|------------|--------------|
| Time       | O(m+n)       |
| Space      | O(min(m, n)) |

---

## Summary Table

| Problem                        | Brute Force        | Optimal                 | Time   | Space |
|--------------------------------|--------------------|-------------------------|--------|-------|
| Left Rotate by 1               | —                  | Shift + store           | O(n)   | O(1)  |
| Left Rotate by D               | Temp array         | Reversal algorithm      | O(n)   | O(1)  |
| Move Zeros to End              | Extra array        | Two pointer (swap)      | O(n)   | O(1)  |
| Linear Search                  | —                  | Single pass             | O(n)   | O(1)  |
| Union of Sorted Arrays         | Set                | Two pointer             | O(m+n) | O(m+n)|
| Intersection of Sorted Arrays  | Nested loop        | Two pointer             | O(m+n) | O(min(m,n)) |

---

## Quick Revision Pointers

- 🔑 **Reversal Algorithm** for rotation: reverse(0, d-1) → reverse(d, n-1) → reverse(0, n-1)
- 🔑 **d = d % n** always — handles `d >= n` edge cases
- 🔑 **Two Pointer pattern** works on sorted arrays because you can make decisions based on comparison (move smaller pointer forward)
- 🔑 **Union:** add element only if it's not equal to `result.back()` (avoids duplicates)
- 🔑 **Intersection:** add element only when both pointers point to the same value
- 🔑 **Move Zeros:** slow pointer tracks zero position, fast pointer finds non-zero → swap

---

*Notes based on TakeUForward (Striver) — Arrays Series Part-2 | Step 3.1*
