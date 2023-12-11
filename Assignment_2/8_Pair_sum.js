function main(input) {
  let inputArr = input.trim().split("\n");
  let [n, s] = inputArr[0].split(" ").map(Number);
  let arr = inputArr[1].split(" ").map(Number);

  let set = new Set();

  for (let i = 0; i < n; i++) {
    if (set.has(s - arr[i])) {
      console.log("Yes");
      return;
    }
    set.add(arr[i]);
  }

  console.log("No");
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
