<h2><a href="https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/">2176. Count Equal and Divisible Pairs in an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">n</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">number of pairs</strong></em> <code style="user-select: auto;">(i, j)</code> <em style="user-select: auto;">where</em> <code style="user-select: auto;">0 &lt;= i &lt; j &lt; n</code>, <em style="user-select: auto;">such that</em> <code style="user-select: auto;">nums[i] == nums[j]</code> <em style="user-select: auto;">and</em> <code style="user-select: auto;">(i * j)</code> <em style="user-select: auto;">is divisible by</em> <code style="user-select: auto;">k</code>.
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,1,2,2,2,1,3], k = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
There are 4 pairs that meet all the requirements:
- nums[0] == nums[6], and 0 * 6 == 0, which is divisible by 2.
- nums[2] == nums[3], and 2 * 3 == 6, which is divisible by 2.
- nums[2] == nums[4], and 2 * 4 == 8, which is divisible by 2.
- nums[3] == nums[4], and 3 * 4 == 12, which is divisible by 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], k = 1
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Since no value in nums is repeated, there are no pairs (i,j) that meet all the requirements.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], k &lt;= 100</code></li>
</ul>
</div>