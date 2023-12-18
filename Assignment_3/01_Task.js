function shufflingString(s, indices) {
  let shuffled = new Array(s.length);
  for (let i = 0; i < s.length; i++) {
    shuffled[indices[i]] = s[i];
  }
  return shuffled.join("");
}

const s = "abc";
const indices = [1, 0, 2];

console.log(shufflingString(s, indices));
