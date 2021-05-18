 # **<div align="center">DAA PRACTICAL 2021</div>**

```
```

<table align="center">
<thead>
<tr>
  <th>S.no.</th>
  <th>Contents</th>
</tr>
</thead>
<tbody>
<tr>
  <td>1.</td>
  <td><a href="https://github.com/shivanshkumar999/DAA-Practical-File/blob/main/Insertion%20Sort(1.a).cpp">Red Black Tree</a></td>
</tr>
<tr>
  <td>2.</td>
  <td><a href="https://github.com/shivanshkumar999/DAA-Practical-File/blob/main/Minimum%20Spanning%20Tree%20(9%20que).cpp">Minimum Spanning Tree</td>
</tr>  
<tr>
  <td>3.</td>
  <td><a href="https://github.com/shivanshkumar999/DAA-Practical-File/blob/main/Comparisons%20of%20different%20sorts.cpp">Implementing Different Sorts</td>
</tr>
</tbody>
</table>

```
```

<br>

- ## Analysis for Red Black Tree

```
A red–black tree is a kind of self-balancing binary search tree in computer science.
Each node of the binary tree has an extra bit, and that bit is often interpreted as the color (red or black) of the node. 
These color bits are used to ensure the tree remains approximately balanced during insertions and deletions.
```
<br>

> **Rules** That Every Red-Black Tree Follows: 
>- Every node has a colour either red or black.
>- The root of the tree is always black.
>- There are no two adjacent red nodes (A red node cannot have a red parent or red child).
>- Every path from a node (including root) to any of its descendants NULL nodes has the same number of black nodes.

<br>

> ### Insertion Happens in this way
<br>
<img src="https://iq.opengenus.org/content/images/2018/07/red-black-tree_-insertion.jpg" align="left">
 
 <br>
 
>- #### Complexity for **INSERTION**
  <br>
  Average and Worst case insertion time complexity: **Θ(log n)**

  Average and Worst case Space complexity: **Θ(n)**

<br>

> ### Deletion Happens in this way
<br>
<img src="https://iq.opengenus.org/content/images/2018/07/red-black-tree_-deletion.jpg" >

<br>

>- #### Complexity for **DELETION**
  <br>
  Average and Worst case deletion time complexity: **Θ(log n)**

  Average and Worst case Space complexity: **Θ(n)**

<br>

> ### Search Happens in this way
> <br>
<img src ="https://iq.opengenus.org/content/images/2018/07/rb-tree-search-1.jpg">

>- #### Complexity for **SEARCHING**
<br>
  Average and Worst case deletion time complexity: **Θ(log n)**

  Average and Worst case Space complexity: **Θ(n)**
  
  <br>
  
  
> **Applications** of Red- Black Tree :
>- Most of the self-balancing BST library functions like map and set in C++ (OR TreeSet and TreeMap in Java) use Red-Black Tree.
>- It is used to implement CPU Scheduling Linux. Completely Fair Scheduler uses it.
>- Besides they are used in the K-mean clustering algorithm for reducing time complexity.
>- Moreover, MySQL also uses the Red-Black tree for indexes on tables.

<br>
  
  ```
  ```
  <br>
  
  - ## Analysis for Minimum Spanning Tree
  
  
  ```
  The cost of the spanning tree is the sum of the weights of all the edges in the tree. 
  There can be many spanning trees. 
  Minimum spanning tree is the spanning tree where the cost is minimum among all the spanning trees. 
  There also can be many minimum spanning trees.
  Here PRIM'S greedy algorithm is used.
  ```
  
  <br>
  
 > ### Prim's Algo Working
 <br>
<img src="https://www.statisticshowto.com/wp-content/uploads/2016/04/prim-4.png">
 <br>
 
 
>- #### Complexity for **PRIM'S ALGORITHM**

The time complexity of the Prim’s Algorithm is **O((V + E)logV)** because each vertex is inserted in the priority queue only once and insertion in priority queue take logarithmic time.

<br>

> **Applications** of Minimum Spanning Tree :
>- Minimum spanning trees are used for network designs (i.e. telephone or cable networks). 
>- They are also used to find approximate solutions for complex mathematical problems like the Traveling Salesman Problem.
>- Other, diverse applications include Cluster Analysis.
>- Real-time face tracking and verification (i.e. locating human faces in a video stream).
>- Protocols in computer science to avoid network cycles.
>- Entropy based image registration.
>- Max bottleneck paths.
>- Dithering (adding white noise to a digital recording in order to reduce distortion).
   <br>
 
 ```
 ```
 <br>
  
  - ## Analysis for Different Sorts
 ```
 1. Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
 2. The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The       algorithm maintains two subarrays in a given array.

    1) The subarray which is already sorted.
    2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

3.Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

4. Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

5. Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

 1. Always pick first element as pivot.
 2. Always pick last element as pivot (implemented below)
 3. Pick a random element as pivot.
 4. Pick median as pivot.

The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
```

<br>

  - ## Examples of Different Sorts
 <br>
 
 **BUBBLE SORT**
 
 <br>
 <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/02/bubble-sort1.png">
 <br>
 
 **SELECTION SORT**
 
 <br>
 <img src="https://runestone.academy/runestone/books/published/pythonds/_images/selectionsortnew.png">
 <br>
 
 **INSERTION SORT**
 
 <br>
 <img src="https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png">
 <br>
 
 **MERGE SORT**
 
 <br>
 <img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png">
 <br>
 
 **QUICK SORT**
 
 <br>
 <img src="https://book.huihoo.com/data-structures-and-algorithms-with-object-oriented-design-patterns-in-c++/html/img2145.gif">
 <br>
 
 
 >- #### Complexities for **DIFFERENT SORTS**
 <br>
 <img src="https://github.com/shivanshkumar999/DAA-Practical-2021/blob/main/comparison-of-sorting-algorithms-compare1-18082c14f960abf3.png?raw=true">
 <br>
 
 > **Applications :**
 >- Merge Sort: Databases use an external merge sort to sort sets of data that are too large to be loaded entirely into memory. The driving factor in this sort is the reduction in the number of disk I/Os.
 >- Bubble Sort: Bubble sort is used in programming TV remote to sort channels on the basis of longer viewing time.
 >- Quick Sort: Sports scores are organised by quick sort on the basis of win-loss ratio.
 >- Selection Sort: K12 education portal allows sorting list of pupils alphabetically through selection sort.
 >- Insertion sort: It is more efficient in practice on small arrays than asymptotically fast algorithms like QuickSort and HeapSort, because of better constant. This is why it is actually used in the implementation of std::sort C++ sorting function at least in GCC, and std::sort is a function that is probably used in more than 90% non-trivial programs in C++ - virtually everywhere.
 

