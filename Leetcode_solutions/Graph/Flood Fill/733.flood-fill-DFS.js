/*
 * @lc app=leetcode id=733 lang=javascript
 *
 * [733] Flood Fill
 */

// @lc code=start
/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} color
 * @return {number[][]}
 */
var floodFill = function (image, sr, sc, color) {
    let rows = image.length;
    let cols = image[0].length;
    let visited = Array.from({ length: rows }, () => Array(cols).fill(false));
    let visited2 = Array(rows).fill(0).map(() => Array(cols).fill(false));
    let original = image[sr][sc];

    function dfs(r, c) {

        if (r >= rows || c >= cols || r < 0 || c < 0) return;

        if (image[r][c] !== original) return;
        image[r][c] = color;

        dfs(r + 1, c);
        dfs(r, c + 1);
        dfs(r - 1, c);
        dfs(r, c - 1);
    }

    if (image[sr][sc] !== color) {
        dfs(sr, sc);
    }

    return image;

};
// @lc code=end

