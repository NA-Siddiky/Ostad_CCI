var isPalindrome = function (s) {
  if (!s) return true;

  s = s.toLowerCase().replace(/[^a-zA-Z0-9]/g, "");
  let i = 0,
    j = s.length - 1;

  // Early exit if we reach the midpoint
  const mid = Math.floor(s.length / 2);
  while (i < mid) {
    if (s[i] !== s[j]) return false;
    i++;
    j--;
  }
  return true;
};

console.log(isPalindrome("madam"));
