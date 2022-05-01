<h2><a href="https://leetcode.com/problems/k-divisible-elements-subarrays/">2261. K Divisible Elements Subarrays</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and two integers <code style="user-select: auto;">k</code> and <code style="user-select: auto;">p</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">distinct subarrays</strong> which have <strong style="user-select: auto;">at most</strong></em> <code style="user-select: auto;">k</code> <em style="user-select: auto;">elements divisible by</em> <code style="user-select: auto;">p</code>.</p>

<p style="user-select: auto;">Two arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> are said to be <strong style="user-select: auto;">distinct</strong> if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">They are of <strong style="user-select: auto;">different</strong> lengths, or</li>
	<li style="user-select: auto;">There exists <strong style="user-select: auto;">at least</strong> one index <code style="user-select: auto;">i</code> where <code style="user-select: auto;">nums1[i] != nums2[i]</code>.</li>
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is defined as a <strong style="user-select: auto;">non-empty</strong> contiguous sequence of elements in an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,3,3,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>], k = 2, p = 2
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong>
The elements at indices 0, 3, and 4 are divisible by p = 2.
The 11 distinct subarrays which have at most k = 2 elements divisible by 2 are:
[2], [2,3], [2,3,3], [2,3,3,2], [3], [3,3], [3,3,2], [3,3,2,2], [3,2], [3,2,2], and [2,2].
Note that the subarrays [2] and [3] occur more than once in nums, but they should each be counted only once.
The subarray [2,3,3,2,2] should not be counted because it has 3 elements that are divisible by 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], k = 4, p = 1
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong>
All element of nums are divisible by p = 1.
Also, every subarray of nums will have at most 4 elements that are divisible by 1.
Since all subarrays are distinct, the total number of subarrays satisfying all the constraints is 10.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], p &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>