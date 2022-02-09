<h2><a href="https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/">1460. Make Two Arrays Equal by Reversing Sub-arrays</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays of equal length <code style="user-select: auto;">target</code> and <code style="user-select: auto;">arr</code>. In one step, you can select any <strong style="user-select: auto;">non-empty sub-array</strong> of <code style="user-select: auto;">arr</code> and reverse it. You are allowed to make any number of steps.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if you can make </em><code style="user-select: auto;">arr</code><em style="user-select: auto;"> equal to </em><code style="user-select: auto;">target</code><em style="user-select: auto;">&nbsp;or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,2,3,4], arr = [2,4,1,3]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can follow the next steps to convert arr to target:
1- Reverse sub-array [2,4,1], arr becomes [1,4,2,3]
2- Reverse sub-array [4,2], arr becomes [1,2,4,3]
3- Reverse sub-array [4,3], arr becomes [1,2,3,4]
There are multiple ways to convert arr to target, this is not the only way to do so.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [7], arr = [7]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> arr is equal to target without any reverses.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [3,7,9], arr = [3,7,11]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> arr does not have value 9 and it can never be converted to target.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">target.length == arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= 1000</code></li>
</ul>
</div>