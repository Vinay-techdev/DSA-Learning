# 📘 DSA Chapter 4 – Hashing

## 🔹 What is Hashing?
Hashing = **Pre-storing + Fetching**.  
It allows us to find frequency or presence of elements in **O(1)** instead of looping every time.

---

## 🐌 Brute Force
- For each query, loop through array/string.  
- **Time Complexity:** O(Q * N) ❌ (slow for large inputs)

---

## ⚡ Optimized Hashing
1. **Number Hashing:** Use an array where index = number, value = frequency.  
2. **Character Hashing:** Map characters using ASCII or `'a' → 0 ... 'z' → 25`.  
3. **Large Numbers:** Use **HashMap (Java)** / **unordered_map (C++)**.

---

## 📝 Example
```

arr = \[1, 3, 2, 1, 3]
queries = \[1, 4, 2, 3, 12]

```
✅ Output: `2, 0, 1, 2, 0`

---

## 🔑 Key Points
- Array Hashing → Works for small ranges.  
- HashMap → Works for large values.  
- **Division Method**: Use `x % m` to reduce space.  
- **Collision**: When multiple elements map to same index, handled by chaining.  