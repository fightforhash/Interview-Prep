
/*
 * @lc app=leetcode id=242 lang=javascript
 *
 * [242] Valid Anagram
 */

// @lc code=start
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
    if (s.length !== t.length) return false;
    let map = new Map();

    for (let c of s) {
        map.set(c, (map.get(c) || 0) + 1);
    }

    for (let z of t) {
        if (!map.get(z)) {
            return false;
        }
        map.set(z, map.get(z) - 1);
    }

    return true;

};
// @lc code=end

