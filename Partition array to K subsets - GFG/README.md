# Partition array to K subsets
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer array <strong style="user-select: auto;">a[ ]</strong> of <strong style="user-select: auto;">N</strong> elements and an integer <strong style="user-select: auto;">K</strong>, the task is to check if the array <strong style="user-select: auto;">a[ ]</strong>&nbsp;could be divided into <strong style="user-select: auto;">K</strong> non-empty subsets with equal sum of elements.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong>&nbsp;All elements of this array should be part of exactly one partition.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
N = 5
a[] = {2,1,4,5,6}
K = 3
<strong style="user-select: auto;">Output:</strong> 
1
<strong style="user-select: auto;">Explanation:</strong> we can divide above array 
into 3 parts with equal sum as (2, 4), 
(1, 5),&nbsp;(6)
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
N = 5 
a[] = {2,1,5,5,6}
K = 3
<strong style="user-select: auto;">Output:</strong> 
0
<strong style="user-select: auto;">Explanation</strong>: It is not possible to divide
above array into 3 parts with equal sum.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">isKPartitionPossible()</strong>&nbsp;which takes the array a[],&nbsp;the size of the array N, and the value of K as inputs and returns true(same as 1) if possible, otherwise false(same as 0).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*2<sup style="user-select: auto;">N</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary&nbsp;Space:</strong>&nbsp;O(2<sup style="user-select: auto;">N</sup>).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤&nbsp;K ≤ N ≤ 10<br style="user-select: auto;">
1 ≤ a[i] ≤ 100</span></p>
 <p style="user-select: auto;"></p>
            </div>