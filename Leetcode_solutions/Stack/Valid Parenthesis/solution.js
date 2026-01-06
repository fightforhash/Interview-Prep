/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    const data = {
        "}": "{",
        "]": "[",
        ")": "("
    };
    let stack = [];
    for (let c of s) {
        if (c === '(' || c === '{' || c === '[') stack.push(c);
        else {
            if (stack.pop() !== data[c]) return false;
        }
    }

    return stack.length === 0;
};