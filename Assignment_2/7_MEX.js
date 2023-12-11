function main(input) {
  let inputArr = input.trim().split("\n");
  let n = parseInt(inputArr[0]);
  let arr = inputArr[1].split(" ").map(Number);

  let set = new Set(arr);

  for (let i = 0; i <= n; i++) {
    if (!set.has(i)) {
      console.log(i);
      break;
    }
  }
}

let input = "";
process.stdin.on("data", (chunk) => {
  input += chunk;
});

process.stdin.on("end", () => {
  main(input.trim());
});
