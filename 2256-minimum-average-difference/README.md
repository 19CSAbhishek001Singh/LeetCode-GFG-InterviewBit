<h2><a href="https://leetcode.com/problems/minimum-average-difference/">2256. Minimum Average Difference</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">average difference</strong> of the index <code style="user-select: auto;">i</code> is the <strong style="user-select: auto;">absolute</strong> <strong style="user-select: auto;">difference</strong> between the average of the <strong style="user-select: auto;">first</strong> <code style="user-select: auto;">i + 1</code> elements of <code style="user-select: auto;">nums</code> and the average of the <strong style="user-select: auto;">last</strong> <code style="user-select: auto;">n - i - 1</code> elements. Both averages should be <strong style="user-select: auto;">rounded down</strong> to the nearest integer.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the index with the <strong style="user-select: auto;">minimum average difference</strong></em>. If there are multiple such indices, return the <strong style="user-select: auto;">smallest</strong> one.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <strong style="user-select: auto;">absolute difference</strong> of two numbers is the absolute value of their difference.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">average</strong> of <code style="user-select: auto;">n</code> elements is the <strong style="user-select: auto;">sum</strong> of the <code style="user-select: auto;">n</code> elements divided (<strong style="user-select: auto;">integer division</strong>) by <code style="user-select: auto;">n</code>.</li>
	<li style="user-select: auto;">The average of <code style="user-select: auto;">0</code> elements is considered to be <code style="user-select: auto;">0</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,5,3,9,5,3]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
- The average difference of index 0 is: |2 / 1 - (5 + 3 + 9 + 5 + 3) / 5| = |2 / 1 - 25 / 5| = |2 - 5| = 3.
- The average difference of index 1 is: |(2 + 5) / 2 - (3 + 9 + 5 + 3) / 4| = |7 / 2 - 20 / 4| = |3 - 5| = 2.
- The average difference of index 2 is: |(2 + 5 + 3) / 3 - (9 + 5 + 3) / 3| = |10 / 3 - 17 / 3| = |3 - 5| = 2.
- The average difference of index 3 is: |(2 + 5 + 3 + 9) / 4 - (5 + 3) / 2| = |19 / 4 - 8 / 2| = |4 - 4| = 0.
- The average difference of index 4 is: |(2 + 5 + 3 + 9 + 5) / 5 - 3 / 1| = |24 / 5 - 3 / 1| = |4 - 3| = 1.
- The average difference of index 5 is: |(2 + 5 + 3 + 9 + 5 + 3) / 6 - 0| = |27 / 6 - 0| = |4 - 0| = 4.
The average difference of index 3 is the minimum average difference so return 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
The only index is 0 so return 0.
The average difference of index 0 is: |0 / 1 - 0| = |0 - 0| = 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>