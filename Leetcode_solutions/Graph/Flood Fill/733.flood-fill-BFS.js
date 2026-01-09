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
    let dirs = [[0, 1], [1, 0], [0, -1], [-1, 0]];
    let original = image[sr][sc];

    if (original === color) return image;

    function bfs(r, c) {
        let q = [];

        q.push([r, c]);
        image[r][c] = color;
        let head = 0;
        while (head < q.length) {
            let [cr, cc] = q[head++];

            for (let [dr, dc] of dirs) {
                let nr = cr + dr;
                let nc = cc + dc;
                if (nr < 0 || nc < 0 || nr >= rows || nc >= cols) continue;

                if (image[nr][nc] === original) {
                    image[nr][nc] = color;
                    q.push([nr, nc]);
                }
            }
        }
    }


    if (image[sr][sc] !== color) {
        bfs(sr, sc);
    }


    return image;
};
// @lc code=end

