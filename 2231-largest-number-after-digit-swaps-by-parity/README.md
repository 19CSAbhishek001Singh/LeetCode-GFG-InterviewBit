<h2><a href="https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/">2231. Largest Number After Digit Swaps by Parity</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a positive integer <code style="user-select: auto;">num</code>. You may swap any two digits of <code style="user-select: auto;">num</code> that have the same <strong style="user-select: auto;">parity</strong> (i.e. both odd digits or both even digits).</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">largest</strong> possible value of </em><code style="user-select: auto;">num</code><em style="user-select: auto;"> after <strong style="user-select: auto;">any</strong> number of swaps.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 1234
<strong style="user-select: auto;">Output:</strong> 3412
<strong style="user-select: auto;">Explanation:</strong> Swap the digit 3 with the digit 1, this results in the number 3214.
Swap the digit 2 with the digit 4, this results in the number 3412.
Note that there may be other sequences of swaps but it can be shown that 3412 is the largest possible number.
Also note that we may not swap the digit 4 with the digit 1 since they are of different parities.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 65875
<strong style="user-select: auto;">Output:</strong> 87655
<strong style="user-select: auto;">Explanation:</strong> Swap the digit 8 with the digit 6, this results in the number 85675.
Swap the first digit 5 with the digit 7, this results in the number 87655.
Note that there may be other sequences of swaps but it can be shown that 87655 is the largest possible number.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= num &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>