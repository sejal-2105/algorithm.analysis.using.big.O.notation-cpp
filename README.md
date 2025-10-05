# algorithm.analysis.using.big.O.notation-cpp


### **Aim**

To demonstrate and compare three fundamental time complexities—**Constant Time ($\mathcal{O}(1)$)**, **Linear Time ($\mathcal{O}(n)$)**, and **Quadratic Time ($\mathcal{O}(n^2)$)**—using simple operations on a data structure.

***

### **Theory: Time Complexity ($\mathcal{O}$ Notation)**

**Time Complexity** is a mathematical tool used to describe how the execution time of an algorithm grows relative to the size of the input, $n$ (often the number of elements in a data structure). It focuses on the worst-case scenario and ignores constant factors and lower-order terms.

* **$\mathcal{O}(1)$ - Constant Time:** The execution time remains the same regardless of the input size $n$. The operation requires a fixed number of steps.
* **$\mathcal{O}(n)$ - Linear Time:** The execution time grows **linearly** with the input size $n$. If the input size doubles, the execution time also roughly doubles. This is typical for algorithms that iterate through all elements once.
* **$\mathcal{O}(n^2)$ - Quadratic Time:** The execution time grows proportional to the **square** of the input size, $n^2$. If the input size doubles, the execution time quadruples. This usually results from algorithms that use nested loops, where the inner loop iterates over the entire input for every item in the outer loop.

### **Algorithm**

1.  **Define `getFirstElement` ($\mathcal{O}(1)$):**
    * This function returns the element at a fixed index (`arr[0]`).
    * The operation takes one single step regardless of the size of the input vector, demonstrating **$\mathcal{O}(1)$** complexity.

2.  **Define `printElements` ($\mathcal{O}(n)$):**
    * This function uses a single `for` loop to iterate through every element of the input vector once.
    * The number of operations is directly proportional to the number of elements $n$, demonstrating **$\mathcal{O}(n)$** complexity.

3.  **Define `printPairs` ($\mathcal{O}(n^2)$):**
    * This function uses two **nested `for` loops**.
    * For every element processed by the outer loop, the inner loop processes every element of the vector again.
    * The total number of operations is $n \times n = n^2$, demonstrating **$\mathcal{O}(n^2)$** complexity.

4.  **In `main`:**
    * A sample vector is initialized.
    * The three functions are called sequentially, and their time complexities are explicitly labeled in the output, demonstrating the practical difference in growth rate.

***

### **Conclusion**

This experiment successfully demonstrated the concept of **Time Complexity** using $\mathcal{O}(1)$, $\mathcal{O}(n)$, and $\mathcal{O}(n^2)$ functions. The results illustrate that for a given input size, $\mathcal{O}(1)$ is the most efficient, $\mathcal{O}(n)$ is efficient, and $\mathcal{O}(n^2)$ is the least efficient due to its rapidly increasing runtime as the input size grows.
