<h2><a href="https://leetcode.com/problems/counting-words-with-a-given-prefix/">2185. Counting Words With a Given Prefix</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of strings <code style="user-select: auto;">words</code> and a string <code style="user-select: auto;">pref</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of strings in </em><code style="user-select: auto;">words</code><em style="user-select: auto;"> that contain </em><code style="user-select: auto;">pref</code><em style="user-select: auto;"> as a <strong style="user-select: auto;">prefix</strong></em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">prefix</strong> of a string <code style="user-select: auto;">s</code> is any leading contiguous substring of <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["pay","<strong style="user-select: auto;"><u style="user-select: auto;">at</u></strong>tention","practice","<u style="user-select: auto;"><strong style="user-select: auto;">at</strong></u>tend"], <code style="user-select: auto;">pref </code>= "at"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The 2 strings that contain "at" as a prefix are: "<u style="user-select: auto;"><strong style="user-select: auto;">at</strong></u>tention" and "<u style="user-select: auto;"><strong style="user-select: auto;">at</strong></u>tend".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["leetcode","win","loops","success"], <code style="user-select: auto;">pref </code>= "code"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no strings that contain "code" as a prefix.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length, pref.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">pref</code> consist of lowercase English letters.</li>
</ul>
</div>