/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let o = x;
    let r = 0;
    while (o > 0) {
        const d = o % 10;
        r = (r * 10) + d;
        o = Math.floor(o / 10);
    }
    return r === x;
}
var y= isPalindrome(121);
