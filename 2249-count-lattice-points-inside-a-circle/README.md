<h2><a href="https://leetcode.com/problems/count-lattice-points-inside-a-circle/">2249. Count Lattice Points Inside a Circle</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a 2D integer array <code style="user-select: auto;">circles</code> where <code style="user-select: auto;">circles[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>, r<sub style="user-select: auto;">i</sub>]</code> represents the center <code style="user-select: auto;">(x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>)</code> and radius <code style="user-select: auto;">r<sub style="user-select: auto;">i</sub></code> of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> circle drawn on a grid, return <em style="user-select: auto;">the <strong style="user-select: auto;">number of lattice points</strong> </em><em style="user-select: auto;">that are present inside <strong style="user-select: auto;">at least one</strong> circle</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A <strong style="user-select: auto;">lattice point</strong> is a point with integer coordinates.</li>
	<li style="user-select: auto;">Points that lie <strong style="user-select: auto;">on the circumference of a circle</strong> are also considered to be inside it.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/exa-11.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> circles = [[2,2,1]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong>
The figure above shows the given circle.
The lattice points present inside the circle are (1, 2), (2, 1), (2, 2), (2, 3), and (3, 2) and are shown in green.
Other points such as (1, 1) and (1, 3), which are shown in red, are not considered inside the circle.
Hence, the number of lattice points present inside at least one circle is 5.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/02/exa-22.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> circles = [[2,2,2],[3,4,1]]
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong>
The figure above shows the given circles.
There are exactly 16 lattice points which are present inside at least one circle. 
Some of them are (0, 2), (2, 0), (2, 4), (3, 2), and (4, 4).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= circles.length &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">circles[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= r<sub style="user-select: auto;">i</sub> &lt;= min(x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>)</code></li>
</ul>
</div>