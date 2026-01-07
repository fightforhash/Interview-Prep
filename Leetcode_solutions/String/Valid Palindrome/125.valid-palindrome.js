/*
 * @lc app=leetcode id=125 lang=javascript
 *
 * [125] Valid Palindrome
 */

// @lc code=start
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {

    function alphanumeric(p) {
        if (!p) return "";
        return p.replace(/[^a-zA-Z0-9]/g, '');
    }

    let c = s.toLowerCase();
    c = alphanumeric(c);

    console.log(c);
    let i = 0, j = c.length - 1;
    /*
    또다른 방법
    let reversed = c.split('').reverse().join('');
    
    return c === reversed;
    */
    while (i < j) {
        if (c[i] !== c[j]) return false;
        i++;
        j--;
    }

    return true;

};
// @lc code=end


// @after-stub-for-debug-begin
module.exports = isPalindrome;
// @after-stub-for-debug-end