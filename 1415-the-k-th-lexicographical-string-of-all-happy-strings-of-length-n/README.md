<h2><a href="https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/">1415. The k-th Lexicographical String of All Happy Strings of Length n</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">happy string</strong> is a string that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">consists only of letters of the set <code style="user-select: auto;">['a', 'b', 'c']</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i] != s[i + 1]</code> for all values of <code style="user-select: auto;">i</code> from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">s.length - 1</code> (string is 1-indexed).</li>
</ul>

<p style="user-select: auto;">For example, strings <strong style="user-select: auto;">"abc", "ac", "b"</strong> and <strong style="user-select: auto;">"abcbabcbcb"</strong> are all happy strings and strings <strong style="user-select: auto;">"aa", "baa"</strong> and <strong style="user-select: auto;">"ababbc"</strong> are not happy strings.</p>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">n</code> and <code style="user-select: auto;">k</code>, consider a list of all happy strings of length <code style="user-select: auto;">n</code> sorted in lexicographical order.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the kth string</em> of this list or return an <strong style="user-select: auto;">empty string</strong> if there are less than <code style="user-select: auto;">k</code> happy strings of length <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, k = 3
<strong style="user-select: auto;">Output:</strong> "c"
<strong style="user-select: auto;">Explanation:</strong> The list ["a", "b", "c"] contains all happy strings of length 1. The third string is "c".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, k = 4
<strong style="user-select: auto;">Output:</strong> ""
<strong style="user-select: auto;">Explanation:</strong> There are only 3 happy strings of length 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 9
<strong style="user-select: auto;">Output:</strong> "cab"
<strong style="user-select: auto;">Explanation:</strong> There are 12 different happy string of length 3 ["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]. You will find the 9<sup style="user-select: auto;">th</sup> string = "cab"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 100</code></li>
</ul>
</div>