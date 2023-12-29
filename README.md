# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->


- The intuition behind the solution is to find the maximum number of candies among all the kids. Then, for each kid, check if giving them extra candies would make them have the maximum number of candies or more. The result is a vector of boolean values indicating whether each kid can have the maximum number of candies or not.





# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize an empty vector v to store the result.
2. Find the maximum number of candies (max) among all the kids
3. Iterate through the array of candies:
    - If the current kid, when given extra candies, can have the maximum number of candies or more, push true to the vector v.
    - Otherwise, push false to the vector v.
4. Return the vector v.

---


# Complexity

---


- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- **Time complexity:O(n),** where n is the number of elements in the array. The algorithm iterates through the array twice - once to find the maximum and once to check each kid's candies.

---


- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- **Space complexity : O(n)** *for the vector v to store the result. The space complexity is dominated by the output vector.*
